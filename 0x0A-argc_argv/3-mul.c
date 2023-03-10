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
	int i, mul;

	if (argc != 3)
	{
		printf("error\n");
		return (1);
	}
	for (i = 0; i < argc; i++)
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
		break;
	}
	return (0);
}
