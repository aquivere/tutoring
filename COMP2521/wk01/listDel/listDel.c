#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

#include "List.h"

void listDelete(struct list *l, int value);

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

void listDelete(struct list *l, int value) {

}