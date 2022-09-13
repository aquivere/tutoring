#ifndef LIST_H
#define LIST_H

struct node {
	int value;
	struct node *next;
};

struct list {
	struct node *head;
};

typedef struct list *List;
typedef struct node *Node;

// Creates a list from command line
List createList(int argc, char **argv);

// Prints list
void printList(List l);

// Frees list 
void freeList(List l);

#endif