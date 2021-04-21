#ifndef TREESTRUCT
#define TREESTRUCT
#include <iostream>

using namespace std;

struct leaf {
    int data;
    int childCount;
    int maxChildren;
    leaf** children;
};

leaf* newleaf(int);
void add(leaf*, leaf*);
void output(leaf*, int);
void tab(int);
void deletetree(leaf*);

#endif