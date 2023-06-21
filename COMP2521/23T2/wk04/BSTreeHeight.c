#include <stdio.h>
#include "BST.h"

int BSTreeHeight(BSTree t);

int main(int argc, char **argv) {
    BSTree t = createBST(argc, argv);
    printf("This tree has a height of %d.\n", BSTreeHeight(t));
    freeBST(t);
    return 0;
}

// Assume height of an empty tree is -1
int BSTreeHeight(BSTree t) {
    return -1;
}