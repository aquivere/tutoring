#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "List.h"

bool listIsSorted(Node l);

int main(int argc, char **argv) {
    Node l = createList(argc, argv);
    printf("Given list ");
    printList(l);

    if (listIsSorted(l)) {
        printf("This list is sorted.\n");
    } else {
        printf("This list is not sorted.\n");
    }

    freeList(l);
    return 0;
}

// Returns whether a list is sorted or not
bool listIsSorted(Node l) {
    return false;
}