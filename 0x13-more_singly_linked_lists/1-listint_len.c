#include <stdio.h>
#include "lists.h"
/**
 * listint_len - prints the number of the element in the node
 * @h:pointer to the head of the list
 * return: number of element in the list
 */

size_t listint_len(const listint_t *h)
{
	size_t counter = 0;
	const struct listint_s *ptr;
	ptr = h;

	while(ptr != NULL){
		counter++;
		ptr = ptr->next;
	}
	return (counter);
}
