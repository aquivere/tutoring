#ifndef HASH_H
#define HASH_H

struct hashTable
{
    int dummy;
};

typedef struct hashTable *HashTable;

HashTable HashTableNew(void);
void HashTableFree(HashTable ht);
void HashTableInsert(HashTable ht, int key, int value);
bool HashTableContains(HashTable ht, int key);
int HashTableGet(HashTable ht, int key);
void HashTableDelete(HashTable ht, int key);
int HashTableSize(HashTable ht);

#endif HASH_H