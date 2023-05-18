#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - adds a node at the end of the linked list
 * @head: double pointer to the head
 * @n: data to be included in the newly added node
 *
 * Return: address of the newly addedd node, NULL if it fails
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
	}
	else
	{
		dlistint_t *current = *head;

		while (current->next != NULL)
			current = current->next;

		current->next = new_node;
		new_node->prev = current;
	}
	return (new_node);
}
