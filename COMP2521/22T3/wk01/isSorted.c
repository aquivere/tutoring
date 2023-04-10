#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool isSorted(int *a, int n);

int main(void) {
    int array[5] = {1, 2, 4, 3, 2};

    if (isSorted(array, 5)) {
        printf("Yes, the array is sorted\n");
    } else {
        printf("No, the array is not sorted\n");
    }

    return 0;
}

// Input:
// - a is a valid pointer to the start of an array of ints
// - n is a positive int indicating how many elements in a[]
// Output:
// - returns true if a[i] <= a[i + 1] for all i in [0..n - 2]
bool isSorted(int *a, int n) {
    for (int i = 0; i < n - 1; i++) {
        if (a[i + 1] < a[i]) {
            return false;
        }
    }
    return true;
}