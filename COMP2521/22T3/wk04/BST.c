#include <stdio.h>
#include <stdlib.h>

#include "BST.h"

static BSTree createNewNode(int value);
static BSTree insertNode(BSTree t, BSTree n);

BSTree createBST(int argc, char **argv) {
    BSTree t = NULL;
    for (int i = 1; i < argc; i++) {
        BSTree n = createNewNode(atoi(argv[i]));
        t = insertNode(t, n);
    }
    return t;
}

void freeBST(BSTree t) {
    if (t == NULL) {
        return;
    }
    free(t->left);
    free(t->right);
    free(t);
}

static BSTree createNewNode(int value) {
    BSTree n = malloc(sizeof(*n));
    n->value = value;
    n->left = NULL;
    n->right = NULL;
    return n;
}

static BSTree insertNode(BSTree t, BSTree n) {
    if (t == NULL) {
        return n;
    } else if (n->value < t->value) {
        t->left = insertNode(t->left, n);
    } else if (n->value > t->value) {
        t->right = insertNode(t->right, n);
    }
    return t;
}
