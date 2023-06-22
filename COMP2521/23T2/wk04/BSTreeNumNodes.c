#include <stdio.h>
#include "BST.h"

int BSTreeNumNodes(BSTree t);

int main(int argc, char **argv) {
    BSTree t = createBST(argc, argv);
    printf("This tree has %d nodes.\n", BSTreeNumNodes(t));
    freeBST(t);
    return 0;
}

int BSTreeNumNodes(BSTree t) {
    // base case
    if (t == NULL) {
        return 0;
    }
    if (t->left == NULL && t->right == NULL) {
        return 1;
    }
    // recursive case
    return 1 + BSTreeNumNodes(t->left) + BSTreeNumNodes(t->right);
}