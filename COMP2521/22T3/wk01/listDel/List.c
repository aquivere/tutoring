#include <stdio.h>
#include <stdlib.h>

#include "List.h"

static List newList();
static Node newNode(int value);

// Creates a list from command line
List createList(int argc, char **argv) {
    List l = newList();
    if (argc == 1) {
        return l;
    }
    Node curr = NULL;
    for (int i = 1; i < argc; i++) {
        Node n = newNode(atoi(argv[i]));
        if (l->head == NULL) {
            l->head = n;
            curr = l->head;
        } else {
            curr->next = n;
            curr = curr->next;
        }
    }
    return l;
}

// Prints list
void printList(List l) {
    Node curr = l->head;
    while (curr != NULL) {
        printf("%d ", curr->value);
        curr = curr->next;
    }
    printf("\n");
}

// Frees list 
void freeList(List l) {
    Node curr = l->head;
    Node prev = NULL;
    while (curr != NULL){
        prev = curr;
        curr = curr->next;
        free(prev);
    }
    free(l);
}

// Create empty list
List newList() {
	List l = malloc(sizeof(l));
	if (l == NULL) {
		fprintf(stderr, "Insufficient memory\n");
		exit(1);
	}
	l->head = NULL;
	return l;
}

static Node newNode(int value) {
    Node n = malloc(sizeof(n));
    n->value = value;
    n->next = NULL;
    return n;
}