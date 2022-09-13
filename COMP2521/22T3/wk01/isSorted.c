#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool isSorted(int *a, int n);

int main(void) {
    int array[5] = {1, 2, 3, 4, 5};

    if (isSorted(array, 5)) {
        printf("Yes, the array is sorted\n");
    } else {
        printf("No, the array is not sorted\n");
    }

    return 0;
}

bool isSorted(int *a, int n) {
    int sorted = true; // assume ok
    // TODO: complete this function
    return sorted;
}