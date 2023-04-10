#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

#include "List.h"

void listDelete(List l, int value);

int main(int argc, char **argv) {
    printf("%d\n", argc);
    /*
    List l = createList(argc, argv);
    printf("Original list: ");
    printList(l);

    int deleteNum = 3;      // number to delete
    printf("Deleting %d\n", deleteNum);
    listDelete(l, deleteNum);   // delete number from list
    
    printf("List after deleting: ");
    printList(l);
    freeList(l);
    return 0;*/
}

void listDelete(List l, int value) {
    Node curr = l->head;
    // deleting the head node
    if (curr->value == value) {
        l->head = curr->next;
        free(curr);
        return;
    }
    // deleting the middle or last node
    Node prev = NULL;
    while (curr != NULL) {
        if (curr->value == value) {
            prev->next = curr->next;
            free(curr);
            return;
        }
        prev = curr;
        curr = curr->next;
    }
}