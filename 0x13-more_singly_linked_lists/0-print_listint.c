#include "lists.h"
#include <stdio.h>

/**
 * print_listint - func prints all ele in node
 * @h: pointer to the first ele in the node
 * Return: counter
 */


size_t  print_listint(const listint_t *h)
{
int counter = 0;
const struct listint_s *ptr;
ptr = h;

while (ptr != NULL)
{
printf("%d\n", ptr->n);
ptr = ptr->next;
counter++;
}
return (counter);
}
