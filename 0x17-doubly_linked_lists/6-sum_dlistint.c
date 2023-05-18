#include "lists.h"

/**
 * sum_dlistint - returns the sum of data in a doubly linked list
 * @head: points to the head node
 *
 * Return: sum, 0 if list is empty
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
