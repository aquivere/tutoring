#include <stdio.h>
#include <stdlib.h>

void countWhile();
void countFor();

int main(void) {
    countWhile();
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
    // TODO
}