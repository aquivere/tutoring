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
    // TODO
    return NULL;
}