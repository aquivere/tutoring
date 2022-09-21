#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "List.h"

bool listIsSorted(List l);

int main(int argc, char **argv) {
    List l = createList(argc, argv);
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
bool listIsSorted(List l) {
    // Base case: empty list
    if (l == NULL) {
        return true;
    }
    // Base case: only one item in list
    if (l->next == NULL) {
        return true;
    }
    // If not sorted, return false
    if (l->value > l->next->value) {
        return false;
    }

    // Recursive call
    return listIsSorted(l->next);
}