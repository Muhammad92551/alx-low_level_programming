#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - removes node at certain idx in a list.
 * @head: A ptr to a ptr to the 1  node of the list.
 * @index: The index of the node to delete, starting from 0.
 *
 * Return: On success, 1. On failure, -1.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *previous = *head;
	listint_t *current = NULL;
	unsigned int j = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(previous);
		return (1);
	}

	while (j < index - 1)
	{
		if (!previous || !(previous->next))
			return (-1);

		previous = previous->next;
		j++;
	}
	current = previous->next;
	previous->next = current->next;
	free(current);
	return (1);
}
