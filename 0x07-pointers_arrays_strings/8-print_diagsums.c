#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_diagsums - diagonal print
 * @a: integer
 * @size: integer
 * Return: Nothing.
 */
void print_diagsums(int *a, int size)
{
	int i, j, k;

	k = 0;
	j = 0;
	for (i = 0; i < (size * size); i++)
	{
			if (i % (size +1) == 0)
			{
				k = k + *(a + i);
			}
			if (i % (size - 1) == 0 && i != 0 && i < size * size - 1)
			{
				j = j + *(a + i);
			}
	}
	printf("%d, %d\n", k, j);
}
