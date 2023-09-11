#include <stdio.h>
#include <stdlib.h>

#include "List.h"

static Node newNode(int value);

// Creates a list from command line
Node createList(int argc, char **argv) {
    if (argc == 1) {
        return NULL;
    }
    Node l = NULL;
    Node curr = l;
    for (int i = 1; i < argc; i++) {
        Node n = newNode(atoi(argv[i]));
        if (curr == NULL) {
            l = n;
            curr = l;
        } else {
            curr->next = n;
            curr = curr->next;
        }
    }
    return l;
}

// Prints list
void printList(Node l) {
    Node curr = l;
    while (curr != NULL) {
        printf("%d ", curr->value);
        curr = curr->next;
    }
    printf("\n");
}

// Frees list 
void freeList(Node l) {
    Node curr = l;
    Node prev = NULL;
    while (curr != NULL){
        prev = curr;
        curr = curr->next;
        free(prev);
    }
}

static Node newNode(int value) {
    Node n = malloc(sizeof(n));
    n->value = value;
    n->next = NULL;
    return n;
}