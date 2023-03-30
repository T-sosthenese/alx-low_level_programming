#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * print_list - prints the elements on a list
 * @h: pointer to the elements
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	const list_t *current = h;

	size_t count = 0;

	while (current != NULL)
	{
		if (current->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", current->len, current->str);
		}
		current = current->next;
		count++;
	}
	return (count);
}
