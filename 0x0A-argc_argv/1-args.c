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

	(void) argv;
	for (i = 0; i < argc; i++)	
	{
		printf("%d\n", argc - 1);
		break;
	}
	return (0);
}
