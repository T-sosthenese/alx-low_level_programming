#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts node at specified index
 * @h: double pointer to the head node
 * @idx: index where node is to be inserted
 * @n: data of the newly added node
 *
 * Return: address of new node, NULL if it fails
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *current;

	unsigned int i;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	if (idx == 0)
	{
		if (*h != NULL)
			(*h)->prev = new_node;
		new_node->next = *h;
		*h = new_node;
		return (new_node);
	}
	current = *h;
	for (i = 0; i < idx - 1 && current != NULL; i++)
		current = current->next;
	if (current == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = current->next;
	if (current->next != NULL)
		current->next->prev = new_node;
	current->next = new_node;
	new_node->prev = current;

	return (new_node);
}
