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
    // TODO: complete this function
    return -1;
}