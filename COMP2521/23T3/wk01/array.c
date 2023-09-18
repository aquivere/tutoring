#include <stdio.h>

int main(void) {
	int *a = malloc(5 * sizeof(int));
	for (int i = 0; i < 5; i++) {
		a[i] = 42;
	}
}