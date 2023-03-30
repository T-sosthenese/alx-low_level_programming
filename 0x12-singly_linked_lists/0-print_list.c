#include <stdio.h>
#include "lists.h"
/**
 * print_list - prints elems in a node
 * @h: head pointer
 *
 * Return: Number of elems in the node
 */
size_t print_list(const list_t *h)
{
	int counter;
	const list_t *ptr;

	counter = 0;
	ptr = h;
	while (ptr != NULL)
	{
		if (ptr->str != NULL)
		{
			printf("[%d] ", ptr->len);
			printf("%s\n", ptr->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		counter++;
		ptr = ptr->next;
	}
	return (counter);
}
