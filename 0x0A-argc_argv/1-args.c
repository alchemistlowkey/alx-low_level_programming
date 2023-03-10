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
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%d\n", atoi(argv[i]));
		break;
	}
	return (0);
}
