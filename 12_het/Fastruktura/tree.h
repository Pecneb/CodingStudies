#ifndef TREESTRUCT
#define TREESTRUCT
#include <iostream>


struct leaf {
    int data;
    int childCount;
    int maxChildren;
    leaf** children;
};

leaf* newleaf(int);
void add(leaf*, leaf*);

#endif