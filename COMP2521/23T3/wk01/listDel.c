#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

#include "List.h"

struct node *listDelete(struct node *l, int value);

int main(int argc, char **argv) {
    struct node *l = createList(argc, argv);
    printf("Original list: ");
    printList(l);

    int deleteNum = 3;      // number to delete
    printf("Deleting %d\n", deleteNum);
    l = listDelete(l, deleteNum);   // delete number from list
    
    printf("List after deleting: ");
    printList(l);
    freeList(l);
    return 0;
}

struct node *listDelete(struct node *l, int value) {
    // if list is empty
    if (l == NULL) {
        return NULL;
    
    // delete head of list
    } else if (l->value == value) {
        struct node *nextHead = l->next;
        free(l);
        return nextHead;
    
    // delete middle of list
    } else {
        struct node *curr = l;
        while (curr->next != NULL) {
            if (curr->next->value == value) {
                struct node *tempDelete = curr->next;
                curr->next = tempDelete->next;
                free(tempDelete);
                break;
            }
            curr = curr->next;
        }
        return l;
    }
}