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
	int i = 10; 
	while (i >= 0) { 
		printf("%d\n", i);
		i--;
	}
}

void countFor() {
    // TODO: create the for loop
}