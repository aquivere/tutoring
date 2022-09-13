#ifndef LIST_H
#define LIST_H

typedef struct node {
	int value;
	struct node *next;
} Node;

typedef Node *List; // pointer to first Node

// Creates a list from command line
List createList(int argc, char **argv);

// Prints list
void printList(List l);

// Frees list 
void freeList(List l);

#endif