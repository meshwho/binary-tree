#include <iostream>
#include "tree.h"

int main(){
    head a(7);
    tree sys;

    int list[8] = {3, 9, 2,5,8,1,4,6};

    for (int i : list){
        sys.add(i, &a);
    }

    return 0;
}
