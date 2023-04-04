#include <stdio.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a node at any index
 * @head: pointer to ther first node
 * @idx: index to insert node, starts at 0
 * @n: data to pass to the new node
 * Return: newnode, null if it fails
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr;

	listint_t *new_node;

	unsigned int j;

	if (head == NULL)
	{
		return (NULL);
	}
	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	ptr = *head;
	for (j = 0; j < idx - 1 && ptr != NULL; j++)
	{
		ptr = ptr->next;
	}
	if (ptr == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = ptr->next;
	ptr->next = new_node;
	return (new_node);
}
