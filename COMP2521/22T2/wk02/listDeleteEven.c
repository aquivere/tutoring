#include <stdio.h>
#include <stdlib.h>

#include "List.h"

List deleteEvens(List l);

int main(int argc, char **argv) {
    List l = createList(argc, argv);
    printf("Original list: ");
    printList(l);

    l = deleteEvens(l);
    printf("Deleted evens from the list: ");
    printList(l);

    freeList(l);
    return 0;
}

// deletes all the even items from the list and returns the remaining list
List deleteEvens(List l) {
    return NULL;
}