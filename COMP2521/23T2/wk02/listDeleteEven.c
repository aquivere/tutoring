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
    // Base case
    if (l == NULL) {
        return NULL;
    }
    if (l->value % 2 == 0) {
        Node nextNode = l->next;
        free(l);
        return deleteEvens(nextNode);
    } else {
        // Recurse
        l->next = deleteEvens(l->next);
        return l;
    }
}


// Node listDelete(Node l, int value) {
//     if (l == NULL) {
//         return NULL;
//     }

//     if (l->value == value) {
//         Node nextNode = l->next;
//         free(l);
//         return nextNode;
//     }
//     // Recurse
//     if (l->value != value) {
//         l->next = listDelete(l->next, value);
//         return l;
//     }
// }