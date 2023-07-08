#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * binary_to_uint - converts the binary number to decimal one
 * @b: pointer to the string
 * return: the converted number OR 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int weight = 1;
	const char *p = b;

	if (b == NULL)
		return (0);

	while (*p != '\0')
	{
		p++;
	}
	p--;

	while (p >= b)
	{
		if (*p == '1')
		{
			result += weight;
		}

		else if (*p != '0')
		{
			return (0);
		}
		weight *= 2;
		p--;
	}
	return (result);
}
