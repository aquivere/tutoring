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
    // base case
    if (t == NULL) {
        return 0;
    }
    if (t->value % 2 != 0) {
        // current node is odd
        return 1 + BSTreeCountOdds(t->left) + BSTreeCountOdds(t->right);
    } else {
        return BSTreeCountOdds(t->left) + BSTreeCountOdds(t->right);
    }
}