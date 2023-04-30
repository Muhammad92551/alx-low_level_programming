#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: pointer to the head of the list
 * @n: new int val
 *
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t  *New_Start_Node = NULL;

	New_Start_Node = (struct listint_s *)malloc(sizeof(struct listint_s));
	if (New_Start_Node == NULL)
	{
		return (NULL);
	}


	New_Start_Node->n = n;
	New_Start_Node->next = *head;
	*head = New_Start_Node;
	return (New_Start_Node);



}
