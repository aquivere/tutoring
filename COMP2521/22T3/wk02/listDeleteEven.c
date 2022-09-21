#include <stdio.h>
#include <stdlib.h>

#include "List.h"

List deleteEvens(List l);

int main(int argc, char **argv) {
    List l = createList(argc, argv);
    printf("Original list: ");
    printList(l);

    l = deleteEvens(l);
    printf("List without evens: ");
    printList(l);

    freeList(l);
    return 0;
}

// Deletes all the even items from the list and returns the remaining list
List deleteEvens(List l) {
    // Base case: list is empty
    if (l == NULL) {
        return NULL;
    }
    // if odd
    if (l->value % 2 == 1) {
        l->next = deleteEvens(l->next);
        return l;
    } else {
        // if even
        List restOfList = l->next;
        free(l);
        return deleteEvens(restOfList);
    }
}