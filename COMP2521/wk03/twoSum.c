#include <stdio.h>
#include <stdbool.h>

bool hasTwoSum(int a[], int n, int v);

int main(void) {
	int a[] = {1, 2, 3, 4};
    int n = 4;
    int v = 3;

    if (hasTwoSum(a, n, v)) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }
	return 0;
}

// returns true if A contains two elements that sum to v
// otherwise false
bool hasTwoSum(int a[], int n, int v) {
	for (int i = 0; i < n; i++) { // (n - 1) + (n - 2) + (n - 3) + ... + 0 = n*(n-1)/2 = O(n^2)
        for (int j = i + 1; j < n; j++) {
            if (a[i] + a[j] == v) {
                return true;
            }
        }
    }
    return false;
}
