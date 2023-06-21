#ifndef BST_H
#define BST_H 

typedef struct BSTNode *BSTree;
typedef struct BSTNode {
	int value;
	BSTree left;
	BSTree right;
} BSTNode;

// Function to create a BST from the command line input
BSTree createBST(int argc, char **argv);

// Frees the tree
void freeBST(BSTree t);

#endif // BST_H