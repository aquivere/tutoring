#include <stdio.h>
#include <stdlib.h>

#include "List.h"

static List newNode(int value);

// Creates a list from command line
List createList(int argc, char **argv) {
    if (argc == 1) {
        return NULL;
    }
    List l = NULL;
    List curr = l;
    for (int i = 1; i < argc; i++) {
        List n = newNode(atoi(argv[i]));
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
void printList(List l) {
    List curr = l;
    while (curr != NULL) {
        printf("%d ", curr->value);
        curr = curr->next;
    }
    printf("\n");
}

// Frees list 
void freeList(List l) {
    List curr = l;
    List prev = NULL;
    while (curr != NULL){
        prev = curr;
        curr = curr->next;
        free(prev);
    }
}

static List newNode(int value) {
    List n = malloc(sizeof(n));
    n->value = value;
    n->next = NULL;
    return n;
}