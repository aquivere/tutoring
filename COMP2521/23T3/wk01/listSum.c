#include <stdio.h>
#include <stdlib.h>

#include "List.h"

// The linked list is represented by the following
// struct node {
// 	int value;
// 	struct node *next;
// };

int sumList(struct node *l);

int main(int argc, char **argv) {
    struct node *l = createList(argc, argv);
    printf("List: ");
    printList(l);

    printf("The sum of the list is %d\n", sumList(l));
    freeList(l);
}

int sumList(struct node *l) {
    // TODO
    return -1;
}