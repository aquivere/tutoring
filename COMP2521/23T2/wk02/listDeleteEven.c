#include <stdio.h>
#include <stdlib.h>

#include "List.h"

Node deleteEvens(Node l);

int main(int argc, char **argv)
{
    Node l = createList(argc, argv);
    printf("Original list: ");
    printList(l);

    l = deleteEvens(l);
    printf("List without evens: ");
    printList(l);

    freeList(l);
    return 0;
}

// Deletes all the even items from the list and returns the remaining list
Node deleteEvens(Node l) {
    
}