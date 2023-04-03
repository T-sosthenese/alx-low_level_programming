#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints elements of a list
 * @h: pointer to listint_t structure
 *
 * Return: node count
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *ptr;

	size_t counter;

	ptr = h;
	counter = 0;

	while (ptr)
	{
		if (ptr->n)
		{
			printf("%d\n", ptr->n);
		}
		else
		{
			printf("0\n");
		}
		counter++;
		ptr = ptr->next;
	}
	return (counter);
}
