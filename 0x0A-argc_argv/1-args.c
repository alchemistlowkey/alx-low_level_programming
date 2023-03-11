#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - program name
 * @argc: arguments count
 * @argv: arguments vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, j = 0;

	(void) argv;
	for (i = 0; i < argc; i++)
	{
		j += i;
		if (i == ',')
		{
			return (-1);
		}
	}
	printf("%d\n", j);
	return (0);
}
