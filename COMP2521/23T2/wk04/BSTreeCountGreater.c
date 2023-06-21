#include <stdio.h>
#include "BST.h"

int BSTreeCountGreater(BSTree t, int val);

int main(int argc, char **argv) {
    BSTree t = createBST(argc, argv);
    int val = 5; // can change this number to test
    printf("This tree has %d nodes greater than %d.\n", BSTreeCountGreater(t, val), val);
    freeBST(t);
    return 0;
}

int BSTreeCountGreater(BSTree t, int val) {
    // TODO: complete this function
    return -1;
}