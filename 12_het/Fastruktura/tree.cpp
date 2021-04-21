#include "tree.h"

leaf* newleaf(int data) {
    leaf* uj = new leaf;
    uj->data = data;
    uj->childCount = 0;
    uj->maxChildren = 0;
    uj->children = NULL;
    return uj;
}

void add(leaf* parent, leaf* child) {
    if(parent == NULL || child == NULL) return;
    if(parent->childCount == parent->maxChildren) {
        int size = parent->maxChildren+2;
        leaf** uj = new leaf*[size];
        for(int i = 0; i < parent->childCount; i++) {
            uj[i] = parent->children[i];
        }
        parent->maxChildren = size;
        if(parent->children != NULL) delete[] parent->children;
    }
    szulo->children[parent->childCount] = child;
    parent->childCount++;
}

inline void tab(int db) {
    for(int i=0; i<db; i++) {
        cout << '\t';
    }
}

void output(leaf* cs, int level) {
    if(cs == NULL) return;
    cout << cs->data << endl;
    for(int i=0; i<cs->childCount; i++) {
        tab(level);
        cout << "'-->";
        output(cs->children[i], level+1);
    }
}

