#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_dlistint - counts the number of nodes in a doubly linked list
 * @h: points to the head node
 *
 * Return: node count
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
