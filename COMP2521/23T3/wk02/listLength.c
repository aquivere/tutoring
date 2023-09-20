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
int listLength(Node l) {
    // base case
    if (l == NULL) {
        return 0;
    }

    // recursive 
    return 1 + listLength(l->next);
}
