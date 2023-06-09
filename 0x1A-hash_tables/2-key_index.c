#include "hash_tables.h"

/**
 * key_index - Generates the index of a key
 * @key: points to the key
 * @size: size of the array of the hash table
 *
 * Return: index of the key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_val = hash_djb2(key);
	unsigned long int index = hash_val % size;

	return (index);
}
