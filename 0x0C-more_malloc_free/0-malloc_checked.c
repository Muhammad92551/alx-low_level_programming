#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/*
  create_array - creates an array of chars, and initializes with specific char
  @size: size of array
  @c: char to assign
  Return: pointer to the array, or NULL if it fails
 
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
	exit(98);
	}
	return (ptr);
}
