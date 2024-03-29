#include <stdio.h>
#include <stdlib.h>

#include "List.h"

Node listDelete(Node list, int value);

int main(int argc, char **argv)
{
    Node list = createList(argc, argv);
    printf("Original list: ");
    printList(list);

    int value = 1; // value to delete is 1
    list = listDelete(list, value);
    printf("List without value: ");
    printList(list);

    freeList(list);
    return 0;
}

// Deletes the first instance of a value from a linked list, if it exists
Node listDelete(Node list, int value) {
    // base case
    if (list == NULL) {
        return NULL;
    }
    if (list->value == value) {
        Node newHead = list->next;
        free(list);
        return newHead;
    }

    // recursive case
    list->next = listDelete(list->next, value);
    return list;
}
