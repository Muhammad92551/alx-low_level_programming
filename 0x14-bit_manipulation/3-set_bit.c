#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: pointer to number to change
 * @index: position whene the number exsit
 * Return: 1 success or -1 if error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (1UL << index) | *n;
	return (1);
}
