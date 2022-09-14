#include <stdio.h>
#include <stdlib.h>

void countWhile();
void countFor();

int main(void) {
	printf("While loop:\n");
    countWhile();
	printf("For loop:\n");
	countFor();
}

void countWhile() {
	int i = 10; // initialisation
	while (i >= 0) { // condition
		printf("%d\n", i);
		i--; // increment
	}
}

void countFor() {
	for (int i = 10; i >= 0; i--) {
		printf("%d\n", i);
	}
}