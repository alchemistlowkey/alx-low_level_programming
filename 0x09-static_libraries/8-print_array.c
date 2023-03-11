#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * print_array - A function that prints nth element
 * @a: integer
 * @n: integer
 * Return: Always 0.
 */
void print_array(int *a, int n)
{
	int i, j;

	j = n - 1;
	for (i = 0; i < j; i++)
	{
		printf("%d, ", a[i]);
	}
	if (i == j)
	{
		printf("%d", a[j]);
	}
	printf("\n");
}
