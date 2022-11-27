#include <iostream>
#include "TreeHead.h"
#define DEBUG

using namespace std;

class tree{
public:
    void add(int x, head* pX){
        if(x > pX->val){
            if(pX->rightChild == nullptr){
                pX->rightChild = new head(x, pX);
                #ifdef DEBUG
                cout << "made right child for: " << pX->val<<"\t"<<x<<'\n';
                #endif
            }else{
                #ifdef DEBUG
                cout << "searching in right"<<"\n";
                #endif
                add(x, pX->rightChild);
            }

        }else if(x < pX->val){
            if(pX->leftChild == nullptr){
                pX->leftChild = new head(x, pX);
                #ifdef DEBUG
                cout << "made left child for: " << pX->val<<"\t"<<x<<'\n';
                #endif
            }else{
                #ifdef DEBUG
                cout << "searching in left\n";
                #endif
                add(x, pX->leftChild);
            }
        }
    }

    bool BinarySearch(int x, head* start){
        if(start->val == x){
            return true;
        }
        else if((start->rightChild == nullptr) && (start->leftChild == nullptr)){
            return false;
        }
        else{
            if(x>start->val){
                if(start->rightChild == nullptr){return false;}
                BinarySearch(x, start->rightChild);
            }else if(x<start->val){
                if(start->leftChild == nullptr){return false;}
                BinarySearch(x, start->leftChild);
            }
        }
        return false;
    }
};