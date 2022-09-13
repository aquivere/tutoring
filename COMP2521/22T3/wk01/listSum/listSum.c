#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

#include "List.h"

int sumWhile(List l);
int sumFor(List l);

int main(int argc, char **argv) {
    List l = createList(argc, argv);
    printList(l);
    int sum = sumWhile(l);
    printf("This is the sum: %d\n", sum);
    freeList(l);
    return 0;
}

int sumWhile(List l) {
    // TOOD: complete this function
}

int sumFor(List l) {
    // TODO: complete this function
}