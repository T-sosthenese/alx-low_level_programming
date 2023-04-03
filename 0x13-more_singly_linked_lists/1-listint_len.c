#include "lists.h"

/**
 * listint_len - prints the number of elements
 * @h: pointer to listint_t
 *
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *current;

	size_t counter;

	current = h;
	counter = 0;
	while (current)
	{
		counter++;
		current = current->next;
	}
	return (counter);
}
