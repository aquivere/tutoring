#include <stdio.h>
#include <stdlib.h>

#include "List.h"

int listCountOdds(Node l);

int main(int argc, char **argv) {
    Node l = createList(argc, argv);
    printf("List: ");
    printList(l);

    printf("The list has %d odd items\n", listCountOdds(l)); // print the length

    freeList(l);
    return 0;
}

// Count the number of odd items in the list
int listCountOdds(Node l) {
    return -1;
}