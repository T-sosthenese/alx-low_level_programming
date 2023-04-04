#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * @head: pointer to pointer to the head node
 * @index: index of the node to delete, starting from 0
 *
 * Return: 1 if successful, -1 otherwise
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current;

	listint_t *prev;

	unsigned int i;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}
	current = *head;
	if (index == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}
	prev = NULL;
	for (i = 0; i < index; i++)
	{
		if (current == NULL)
		{
			return (-1);
		}
		prev = current;
		current = current->next;
	}
	prev->next = current->next;
	free(current);
	return (1);
}
