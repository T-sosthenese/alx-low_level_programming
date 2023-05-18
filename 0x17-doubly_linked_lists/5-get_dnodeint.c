#include "lists.h"
#include <stddef.h>

/**
 * get_dnodeint_at_index - returns the node at the required index
 * @head: points to the head node
 * @index: index of the node
 *
 * Return: node at index, NULL if fails
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *current = head;

	while (current != NULL)
	{
		if (count == index)
			return (current);

		current = current->next;
		count++;
	}
	return (NULL);
}
