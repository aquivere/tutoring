#include <stdio.h>
#include "BST.h"

int bstNodeLevel(BSTree t, int key);

int main(int argc, char **argv) {
    BSTree t = createBST(argc, argv);
    int key = 4; // can change this number to test
    int level = bstNodeLevel(t, key);
    if (level == -1) {
        printf("The node with value %d does not exist on this tree.\n", key);
    } else {
        printf("The node with value %d is on level %d of the tree.\n", key, level);
    }
    freeBST(t);
    return 0;
}

// Return -1 if the key does not exist in the tree
int bstNodeLevel(BSTree t, int key) {
    if (t == NULL) {
        return -1;
    }

    if (key == t->value) {
        return 0;
    }

    if (key > t->value) {
        int levelRight = bstNodeLevel(t->right);
        if (levelRight == -1) {
            return -1;
        }
        return 1 + levelRight;
    } else if (key < t->value) {
        int levelLeft = bstNodeLevel(t->left);
        if (levelLeft == -1) {
            return -1;
        }
        return 1 + levelLeft;
    }
}