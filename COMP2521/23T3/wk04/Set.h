#ifndef LIST_H
#define LIST_H

#include <stdio.h>
#include <stdbool.h>

typedef int Set; // NOTE: int used as placeholder (not implemented)

// NOTE: These functions are not implemented, this is just a placeholder 

// Creates a new empty set
Set SetNew(void);

// Frees memory allocated to the set
void SetFree(Set s);

// Inserts an element into the set
void SetInsert(Set s, int elem);

// Deletes an element from the set
void SetDelete(Set s, int elem);

// Returns true if the given element is in the set, and false otherwise
bool SetContains(Set s, int elem);

// Returns the number of elements in the set
int SetSize(Set s);

#endif