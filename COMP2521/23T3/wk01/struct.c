#include <stdio.h>

struct node {
	int value;
	struct node *next;
};

int main(void) {
	struct node n;
	n.value = 42;
	n.next = NULL;
}