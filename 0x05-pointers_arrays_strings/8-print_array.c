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
	int i;

	n = 0;
	a = &n;
	for (i = 0, i <= n, i++)
	printf("%d, ", a[n]);
}
