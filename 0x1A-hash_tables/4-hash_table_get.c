#include "hash_tables.h"

/**
 * hash_table_get - gets the value associated with a certain key
 * @ht: the hash table to be searched
 * @key: the key being searched for
 *
 * Return: value associated with element, NULL otherwise
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	hash_node_t *node = NULL;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((const unsigned char *) key, ht->size);
	node = ht->array[index];

	if (node == NULL)
		return (NULL);

	while (strcmp(key, node->key) != 0)
		node = node->next;

	return (node->value);
}
