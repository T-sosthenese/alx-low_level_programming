#include "lists.h"

size_t looped_listint_count(listint_t *head);
size_t free_listint_safe(listint_t **h);

/**
 * looped_listint_count - Counts the number of unique nodes
 * @head: A pointer to the head of the listint_t to check.
 *
 * Return: 0 (not looped),the number of unique nodes in the list
 */

size_t looped_listint_count(listint_t *head)
{
	listint_t *car;

	listint_t *box;

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
 * free_listint_safe - safely frees a list
 * @h: A pointer to the header address of
 *
 * Return: The size of the list that was freed
 *
 * Description: The function sets the head to NULL
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *temp;

	size_t nodes;

	size_t i;

	nodes = looped_listint_count(*h);

	if (nodes == 0)
	{
		for (; h != NULL && *h != NULL; nodes++)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
		}
	}

	else
	{
		for (i = 0; i < nodes; i++)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
		}

		*h = NULL;
	}

	h = NULL;

	return (nodes);
}
