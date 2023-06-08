#include <stdio.h>
#include <stdlib.h>

#include "List.h"

int listLength(Node l);

int main(int argc, char **argv) {
    Node l = createList(argc, argv);
    printf("List: ");
    printList(l);

    printf("The list is length %d\n", listLength(l)); // print the length

    freeList(l);
    return 0;
}

// Find the length of the list
int doListLength(Node l) {
    // ITERATIVE
    // Node curr = l;
    // int count = 0;
    // while (curr != NULL) {
    //     count += 1;
    //     curr = curr->next;
    // }
    // return count;

    // RECURSIVE
    // Base case
    if (l == NULL) {
        return 0;
    }

    // Recurse
    return 1 + listLength(l->next);
}
