#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * dlistint_len - determines the length of a d linked list
 * @h: head pointer
 *
 * Return: number of elements in a linked list
 */

size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
