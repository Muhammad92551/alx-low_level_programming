#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - all arguments it receives.
 * @argc: count the number of args
 * @argv: array of args
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	{
	printf("%s\n", argv[a]);
	}
	return (0);
}
