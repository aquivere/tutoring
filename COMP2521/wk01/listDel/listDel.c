#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

#include "List.h"

void listDelete(struct list *l, int value);

int main(int argc, char **argv) {
    List l = createList(argc, argv);
    printList(l);
    freeList(l);
    return 0;
}

void listDelete(struct list *l, int value) {
    // TODO
}