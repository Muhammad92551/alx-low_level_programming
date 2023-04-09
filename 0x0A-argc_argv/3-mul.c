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
	int a0 = 0, a1 = 0;

	if (argc == 3)
	{
	a0 = atoi(argv[1]);
	a1 = atoi(argv[2]);
	printf("%d\n", n1 * n2);
	}
	else
	{
	printf("Error\n");
	return (1);
	}
	return (0);
}
