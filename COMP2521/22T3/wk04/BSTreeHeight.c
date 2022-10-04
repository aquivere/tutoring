#include <stdio.h>
#include "BST.h"

int BSTreeHeight(BSTree t);

int main(int argc, char **argv) {
    BSTree t = createBST(argc, argv);
    printf("This tree has a height of %d.\n", BSTreeHeight(t));
    freeBST(t);
    return 0;
}

int BSTreeHeight(BSTree t) {
    // TODO: complete this function
    return -1;
}