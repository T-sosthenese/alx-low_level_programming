#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at the specified index
 * @head: pointer to the head node
 * @index: the location of the node to be accessed
 *
 * Return: current node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current;

	unsigned int i;

	current = head;

	i = 0;
	while (current != NULL && i < index)
	{
		current = current->next;
		i++;
	}
	return (current);
}
