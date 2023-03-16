#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *malloc_checked - malloc checked
 * @b: unsigned integer
 *
 * Return: c
 */
void *malloc_checked(unsigned int b)
{
	int *g;

	g = malloc(sizeof(int) * b);
	if (g == NULL)
		exit(98);
	return (g);
}
