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
    // Base case 
    if (t == NULL) {
        return 0;
    }

    // Recursive
    if (t->value % 2 == 1) {
        // odd case
        return BSTreeCountOdds(t->left) + BSTreeCountOdds(t->right) + 1;
    } else {
        return BSTreeCountOdds(t->left) + BSTreeCountOdds(t->right);
    }
}