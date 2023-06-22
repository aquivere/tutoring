#include <stdio.h>
#include "BST.h"

int BSTreeHeight(BSTree t);

int main(int argc, char **argv) {
    BSTree t = createBST(argc, argv);
    printf("This tree has a height of %d.\n", BSTreeHeight(t));
    freeBST(t);
    return 0;
}

// Assume height of an empty tree is -1
int BSTreeHeight(BSTree t) {
    // base case
    if (t == NULL) {
        return -1;
    }
    if (t->left == NULL && t->right == NULL) {
        return 0;
    }

    // recursive case
    int leftHeight = BSTreeHeight(t->left);
    int rightHeight = BSTreeHeight(t->right);
    if (leftHeight > rightHeight) {
        return leftHeight + 1;
    } else {
        return rightHeight + 1;
    }
}