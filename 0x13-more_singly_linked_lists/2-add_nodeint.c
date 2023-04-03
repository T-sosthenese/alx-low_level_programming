#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - adds a node at the beginning of a list
 * @head: pointer to the head node
 * @n: integer to be added in the list
 *
 * Return: pointer to the head node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

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
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
