#include <stdio.h>
#include "BST.h"

int bstCountOdds(BSTree t);

int main(int argc, char **argv) {
    BSTree t = createBST(argc, argv);
    printf("This tree has %d odd nodes.\n", bstCountOdds(t));
    freeBST(t);
    return 0;
}

int bstCountOdds(BSTree t) {
    // TODO
    return -1;
}