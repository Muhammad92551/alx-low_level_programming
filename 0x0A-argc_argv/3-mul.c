#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers.
 * @argc: count the arg
 * @argv: array for args
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int a1 = 0, a2 = 0;

	if (argc == 3)
	{
	a1 = atoi(argv[1]);
	a2 = atoi(argv[2]);
	printf("%d\n", n1 * n2);
	}
	else
	{
	printf("Error\n");
	return (1);
	}
	return (0);
}
