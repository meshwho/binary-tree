#include <iostream>

struct head{
    head* first = this;
    int val;
    head* leftChild = nullptr;
    head* rightChild = nullptr;
    head* parent;
    head(int x, head* parent = nullptr) : val(x){};
};