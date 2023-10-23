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
    // base case
    if (t == NULL) {
        return 0;
    }
    if (t->value % 2 == 1) {
        // current node is odd
        return 1 + bstCountOdds(t->left) + bstCountOdds(t->right);
    } else {
        // current node is even
        return bstCountOdds(t->left) + bstCountOdds(t->right);
    }
}