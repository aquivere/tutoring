#include <stdio.h>
#include <stdbool.h>
#include <Set.h>

int numOddOccurrences(int arr[], int size) {
    Set setWithOddOcc = SetNew();
	for (int i = 0; i < size; i++) {
        if (SetContains(setWithOddOcc, arr[i]) == false) {
            SetInsert(setWithOddOcc, arr[i]);
        } else {
            SetDelete(setWithOddOcc, arr[i]);
        }
    }
    return SetSize(setWithOddOcc);
}
