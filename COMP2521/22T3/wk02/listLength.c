#include <stdio.h>
#include <stdlib.h>

#include "List.h"

int listLength(List list);

int main(int argc, char **argv) {
    List l = createList(argc, argv);
    printf("List: ");
    printList(l);

    printf("The list is length %d\n", listLength(l)); // print the length

    freeList(l);
    return 0;
}

// Find the length of the list
int listLength(List list) {
    // base case
    if (list == NULL) {
        return 0;
    }
    // recursive function call
    return 1 + listLength(list->next);
}