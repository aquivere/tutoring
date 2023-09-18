#include <stdio.h>
#include <malloc.h>

struct node {
	int value;
	struct node *next;
};

int main(void) {
	struct node *n = malloc(sizeof(struct node));
	// OR struct node *n = malloc(sizeof(*n));
	n->value = 42;
	n->next = NULL;
}