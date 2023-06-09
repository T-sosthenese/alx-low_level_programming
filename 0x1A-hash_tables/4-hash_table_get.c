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
	unsigned long int index;
	hash_node_t *node;

	index = key_index((const unsigned char *) key, ht->size);
	node = ht->array[index];

	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);

		node = node->next;
	}
	return (NULL);
}
