#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - Counts the number of unique nodes
 * @head: A pointer to the head of the listint_t
 *
 * Return: If the list is not looped - 0.
 *         Otherwise - the number of unique nodes in the list.
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *car;

	const listint_t *box;

	size_t nodes;

	nodes = 1;
	if (head == NULL || head->next == NULL)
		return (0);

	car = head->next;
	box = (head->next)->next;

	while (box)
	{
		if (car == box)
		{
			car = head;
			while (car != box)
			{
				nodes++;
				car = car->next;
				box = box->next;
			}

			car = car->next;
			while (car != box)
			{
				nodes++;
				car = car->next;
			}

			return (nodes);
		}

		car = car->next;
		box = (box->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - Prints a listint_t list safely.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes;

	size_t i;

	i = 0;
	nodes = looped_listint_len(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (i = 0; i < nodes; i++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes);
}
