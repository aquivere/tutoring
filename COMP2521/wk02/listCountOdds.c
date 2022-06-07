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

// count the number of odd items in the list
int getOdds(List l) {
    return -1;
}