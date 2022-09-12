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
    // base case: return 0 when we have an empty list
    if (list == NULL) {
        return 0;
    }

    // recursive case: 1 + the length of the rest of the list
    return 1 + getLength(list->next);
}
