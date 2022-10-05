#include <stdio.h>
#include "BST.h"

int BSTreeNodeLevel(BSTree t, int key);

int main(int argc, char **argv) {
    BSTree t = createBST(argc, argv);
    int key = 4; // can change this number to test
    int level = BSTreeNodeLevel(t, key);
    if (level == -1) {
        printf("The node with value %d does not exist on this tree.\n", key);
    } else {
        printf("The node with value %d is on level %d of the tree.\n", key, level);
    }
    freeBST(t);
    return 0;
}

// Return -1 if the key does not exist in the tree
int BSTreeNodeLevel(BSTree t, int key) {
    if (t == NULL) {
        return -1;
    } else if (t->value == key) {
        return 0;
    } else if (key > t->value) {
        int levelRight = BSTreeNodeLevel(t->right, key);
        if (levelRight == -1) {
            // if key can't be found in the right subtree
            return -1;
        }
        return 1 + levelRight;
    } else {
        // key < t->value
        int levelLeft = BSTreeNodeLevel(t->left, key);
        if (levelLeft == -1) {
            // if key can't be found in the left subtree
            return -1;
        }
        return 1 + levelLeft;
    }
}