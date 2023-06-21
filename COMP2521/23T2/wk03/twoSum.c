#include <stdio.h>
#include <stdbool.h>

bool hasTwoSum(int a[], int n, int v);

int main(void) {
	int a[] = {1, 2, 3, 4};
    int n = 4;
    int v = 10;

    if (hasTwoSum(a, n, v)) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }
	return 0;
}

// returns true if A contains two elements that sum to v
// otherwise false
// Time complexity: n^2
bool hasTwoSum(int a[], int n, int v) {
    // loop through a
    // for each element in a, v - element value
    // is this v - element value inside the rest of the array 
    for (int i = 0; i < n - 1; i++) {
        int diff = v - a[i];
        for (int j = i + 1; j < n; j++) {
            if (a[j] == diff) {
                return true; // n + n-1 + n-2 + n-3 + ... + 1  = n * (n-1)/2
            }
        }
    }
	return false;
}
