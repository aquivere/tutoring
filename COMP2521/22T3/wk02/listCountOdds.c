#include <stdio.h>
#include <stdlib.h>

#include "List.h"

int getOdds(List l);

int main(int argc, char **argv) {
    List l = createList(argc, argv);
    printf("List: ");
    printList(l);

    printf("The list has %d odd items\n", getOdds(l)); // print the length

    freeList(l);
    return 0;
}

// Count the number of odd items in the list
int getOdds(List l) {
    // Base Case: empty list
    if (l == NULL) {
        return 0;
    }
    // if odd
    if (l->value % 2 == 1) {
        return 1 + getOdds(l->next);
    } else {
        // if even
        return getOdds(l->next);
    }
}