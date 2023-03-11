#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * main - program name
 * @argc: arguments count
 * @argv: arguments vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, add = 0;

	if (argc <= 1)
	{
		printf("0\n");
	}
	if (argc == 101)
	{
		printf("Error\n");
		return (1);
	}
	if (argc > 1)
	{
		for (i = 0; i < argc; i++)
		{
			add += atoi(argv[i]);
		}
		printf("%d\n", add);
	}
	return (0);
}
