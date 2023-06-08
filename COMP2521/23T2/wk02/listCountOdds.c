#include <stdio.h>
#include <stdlib.h>

#include "List.h"

int getOdds(Node l);

int main(int argc, char **argv) {
    Node l = createList(argc, argv);
    printf("List: ");
    printList(l);

    printf("The list has %d odd items\n", getOdds(l)); // print the length

    freeList(l);
    return 0;
}

// Count the number of odd items in the list
int getOdds(Node l) {
    // Base case
    if (l == NULL) {
        return 0;
    }

    // Recurse
    if (l->value % 2 == 1) {
        // if node is odd
        return 1 + getOdds(l->next);
    } else {
        return getOdds(l->next);
    }
    
}