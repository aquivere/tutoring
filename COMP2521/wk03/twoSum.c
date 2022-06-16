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
	return false;
}
