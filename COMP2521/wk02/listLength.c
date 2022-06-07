#include <stdio.h>
#include <stdlib.h>

#include "List.h"

int getLength(List list);

int main(int argc, char **argv) {
    List l = createList(argc, argv);
    printf("List: ");
    printList(l);

    printf("The list is length %d\n", getLength(l)); // print the length

    freeList(l);
    return 0;
}

// find the length of the list
int getLength(List list) {
    return -1;
}
