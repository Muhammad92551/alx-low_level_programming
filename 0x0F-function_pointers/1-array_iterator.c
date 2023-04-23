#include "function_pointers.h"
#include <stdio.h>
/**
 array_iterator - prints each  element of an array
 @array: array
 @size: element in array
 @action: pointer to print in regular
 return: void
*/
	void array_iterator(int *array, size_t size, void (*action)(int))
	{
		unsigned int i;


		if (array == NULL || action == NULL)
			return;


		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
