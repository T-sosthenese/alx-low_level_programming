#include "lists.h"

/**
 * sum_listint - returns the sum of integers in a linked list
 * @head: head pointer
 *
 * Return: sum of integers, NULL if empty
 */

int sum_listint(listint_t *head)
{
	listint_t *current;

	int sum;

	current = head;
	sum = 0;
	if (current == NULL)
	{
		return (0);
	}
	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
