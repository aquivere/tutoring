#include <stdio.h>
#include <stdbool.h>
#include <Stack.h>

struct queue {
	Stack s1;
	Stack s2;
};

typedef struct queue * Queue;

Queue QueueNew(void) {
	Queue q = malloc(sizeof(struct queue));
	q->s1 = StackNew();
	q->s2 = StackNew();
	return q;
}

void QueueEnqueue(Queue q, int item) {
	StackPush(q->s1, item);
}

int QueueDequeue(Queue q) {
	if (StackSize(q->s2) == 0) {
		while (StackSize(q->s1) > 0) {
			int item = StackPop(q->s1);
		StackPush(q->s2, item);
		}
	}
	int toReturn = StackPop(q->s2);

	return toReturn;
}
