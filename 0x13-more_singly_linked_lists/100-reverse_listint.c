#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: double pointer to the head node
 *
 * Return: pointer to a linked list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev;

	listint_t *current;

	listint_t *next;

	prev = NULL;
	current = *head;
	next = NULL;
	while (current != NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	*head = prev;
	return (*head);
}
