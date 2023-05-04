#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index.
 * @n: decimal number
 * @index: given position
 * return: binary number or (-1) if error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val_at_given_index;
	if (index > 63)
		return (-1);

	bit_val_at_given_index = (n >> index) & 1;
	return (bit_val_at_given_index);
}
