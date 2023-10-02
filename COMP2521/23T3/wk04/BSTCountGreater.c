#include <stdio.h>
#include "BST.h"

int bstCountGreater(BSTree t, int val);

int main(int argc, char **argv) {
    BSTree t = createBST(argc, argv);
    int val = 4; // can change this number to test
    printf("This tree has %d nodes greater than %d.\n", bstCountGreater(t, val), val);
    freeBST(t);
    return 0;
}

int bstCountGreater(BSTree t, int val) {
    // TODO
    return -1;
}