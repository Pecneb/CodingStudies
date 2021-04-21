#include "tree.h"

int main() {
    leaf* root = newleaf(1);
    
    add(root, newleaf(11));
    add(root->children[0], newleaf(111));
    add(root->children[0], newleaf(112));
    
    add(root, newleaf(12));
    add(root->children[1], newleaf(121));
    add(root->children[1], newleaf(122));

    output(root, 0);
    deletetree(root);
    return 0;
} 