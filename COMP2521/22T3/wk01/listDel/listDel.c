#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

#include "List.h"

void listDelete(List l, int value);

int main(int argc, char **argv) {    
    List l = createList(argc, argv);
    printf("Original list: ");
    printList(l);
    
    int deleteNum = 3;      // number to delete
    printf("Deleting %d\n", deleteNum);
    listDelete(l, deleteNum);   // delete number from list
    
    printf("List after deleting: ");
    printList(l);
    freeList(l);
    return 0;
}

void listDelete(List l, int value) {
    // CASES 
    // empty 
    // value is head of list 
    // value is in the middle or tail of the list 

    // List is empty
    if (l->head == NULL) {
        return;
    }

    // Value is at the head of the list
    Node curr = l->head;
    if (curr->value == value) {
        l->head = curr->next;
        free(curr);
        return;
    }

    // Value is in the middle or tail of the list
    while (curr->next != NULL && curr->next->value != value) {
        curr = curr->next;
    }
    // curr->next == NULL OR curr->next->value == value
    if (curr->next == NULL) {
        return;
    }
    Node temp = curr->next; 
    curr->next = curr->next->next;
    free(temp);
    return;
}