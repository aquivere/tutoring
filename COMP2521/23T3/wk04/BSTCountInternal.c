#include <stdio.h>
#include "BST.h"

int bstCountInternal(BSTree t);

int main(int argc, char **argv) {
    BSTree t = createBST(argc, argv);
    printf("This tree has %d internal nodes.\n", bstCountInternal(t));
    freeBST(t);
    return 0;
}

int bstCountInternal(BSTree t) {
    // TODO
    return -1;
}