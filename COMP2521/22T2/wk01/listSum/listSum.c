#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

#include "List.h"

int sumWhile(List l);
int sumFor(List l);

int main(int argc, char **argv) {
    List l = createList(argc, argv);
    printList(l);
    int sum = sumFor(l);
    printf("This is the sum: %d\n", sum);
    freeList(l);
    return 0;
}

int sumWhile(List l) {
    int sum = 0;
    List curr = l;
    while (curr != NULL) {
        sum += curr->value;
        curr = curr->next;
    }
    return sum;
}

int sumFor(List l) {
    int sum = 0;
    for (List curr = l; curr != NULL; curr = curr->next) {
        sum += curr->value;
    }
    return sum;
}