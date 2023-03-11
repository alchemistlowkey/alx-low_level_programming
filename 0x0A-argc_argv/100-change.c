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
	int i, j, k;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	j = atoi(argv[1]);
	k = 0;
	if (j < 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; i < 5 && j >= 0; i++)
	{
		while (j >= coins[i])
		{
			j++;
		}
	}
	return (0);
}
