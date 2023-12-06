#include "hash_tables.h"

/**
 * key_index - function that returns the index of a key
 * @key: the key to search for the index
 * @size: size of the hash table
 * Return: index of the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;

	hash = hash_djb2(key);
	return (hash % size);
}


