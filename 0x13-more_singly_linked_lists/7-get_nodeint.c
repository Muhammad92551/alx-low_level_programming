#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * *get_nodeint_at_index - func that get node at given position
 * @head: ptr to the first node of the list
 * @index: given position
 * Return: node at the given position
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *current = head;

	for (i = 0; i < index && current != NULL; i++)
{
	current = current->next;
}
if (current == NULL)
{
	return (NULL);
}
return (current);
}
