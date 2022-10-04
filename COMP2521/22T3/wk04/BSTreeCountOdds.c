#include <stdio.h>
#include "BST.h"

int BSTreeCountOdds(BSTree t);

int main(int argc, char **argv) {
    BSTree t = createBST(argc, argv);
    printf("This tree has %d odd nodes.\n", BSTreeCountOdds(t));
    freeBST(t);
    return 0;
}

int BSTreeCountOdds(BSTree t) {
    // TODO: complete this function
    return -1;
}