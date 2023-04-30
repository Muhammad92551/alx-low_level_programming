#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end of the list
 * @head: ptr to the head of the list
 * @n: new int val to be added
 *
 * Return: the add of the new ele, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr, *New_End_Node;

	New_End_Node = malloc(sizeof(listint_t));
	if (New_End_Node == NULL)
	{
		return (NULL);
	}

	New_End_Node->n = n;
	New_End_Node->next = NULL;

	if (*head == NULL)
	{
		*head = New_End_Node;
	}
	else
	{
		ptr = *head;
		while (ptr->next != NULL)
		{
			ptr = ptr->next;
		}
		ptr->next = New_End_Node;
	}
	return (New_End_Node);
}
