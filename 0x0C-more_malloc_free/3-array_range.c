#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * array_range - creates an cray of integers.
 * @min: minimum value.
 * @max: maximum value.
 * Return: cray.
 */
int *array_range(int min, int max)
{
	int *c;
	int i;

	if (min > max)
		return (NULL);
	c = malloc(sizeof(int) * ((max - min) + 1));
	if (c == NULL)
		return (NULL);
	for (i = 0; min <= max; i++, min++)
	{
		c[i] = min;
	}
	return (c);
}
