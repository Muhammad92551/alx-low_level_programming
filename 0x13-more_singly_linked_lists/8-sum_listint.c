#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * sum_listint - function return sum of dat
 * @head: the first node at the list
 * Return: sum of the node's data
 */

int sum_listint(listint_t *head)
{

	int sum;
	sum = 0;

	if (!head)
{
	return (0);
}
while (head != NULL)
{
	sum += head->n;
	head = head->next;
}
return (sum);
}
