#include "lists.h"

/**
 * find_listint_loop - finds the loop contained in a list
 * @head: pointer to the head of the list
 *
 * Return: NULL (no loop), otherwise, address of the node where the loop starts
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *box;

	listint_t *car;

	if (head == NULL || head->next == NULL)
		return (NULL);

	car = head->next;
	box = (head->next)->next;

	while (box)
	{
		if (car == box)
		{
			car = head;

			while (car != box)
			{
				car = car->next;
				box = box->next;
			}

			return (car);
		}

		car = car->next;
		box = (box->next)->next;
	}

	return (NULL);
}
