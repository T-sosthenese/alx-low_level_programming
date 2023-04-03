#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node
 * @head: double pointer of the head node
 *
 * Return: integer n
 */

int pop_listint(listint_t **head)
{
	int n;
	listint_t *tmp;

	if (*head == NULL)
		return (0);

	tmp = *head;
	*head = (*head)->next;
	n = tmp->n;
	free(tmp);

	return (n);
}
