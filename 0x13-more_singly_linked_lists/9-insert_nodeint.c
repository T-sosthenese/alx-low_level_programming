#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a node at a specified index
 * @head: head double pointer
 * @idx: index where a node is to be inserted
 * @n: integer to be added to integer data of the struct
 *
 * Return: pointer to the new_node, NULL if failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;

	listint_t *current;

	unsigned int i;

	if (head == NULL)
	{
		return (NULL);
	}
	if (idx == 0)
	{
		return (add_nodeint_end(head, n));
	}
	current = *head;
	for (i = 0; current != NULL && i < idx - 1; i++)
	{
		current = current->next;
	}
	if (current == NULL)
	{
		return (NULL);
	}
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = current->next;
	current->next = new_node;
	return (new_node);
}
