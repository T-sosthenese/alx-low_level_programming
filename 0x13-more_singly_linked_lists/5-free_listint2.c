#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees a linked list
 * @head: double pointer to the head of the list to be freed.
 */

void free_listint2(listint_t **head)
{
	listint_t *temp_node;

	if (head == NULL)
	{
		return;
	}
	while (*head != NULL)
	{
		temp_node = *head;
		*head = (*head)->next;
		free(temp_node);
	}
}
