#ifndef LIST_H
#define LIST_H

#include <stdio.h>
#include <stdbool.h>

typedef int Stack; // NOTE: int used as placeholder (not implemented)

// NOTE: These functions are not implemented, this is just a placeholder 

// Creates a new empty stack
Stack StackNew(void);

// Pushes an item onto the stack
void StackPush(Stack s, int item);

// Pops an item from the stack and returns it
// Assumes that the stack is not empty
int StackPop(Stack s);

// Returns the number of items on the stack
int StackSize(Stack s);

#endif