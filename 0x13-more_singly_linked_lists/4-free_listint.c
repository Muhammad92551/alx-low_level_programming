#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_listint - delete the all nodes one by one/
 * @head: pointer to the first elem in the list
 *
 * Return: voide
 */

void free_listint(listint_t *head)
{
	listint_t *helper = head;

	while (helper != NULL)
	{
		helper = helper->next;
		free(head);
		head = helper;
	}
}
