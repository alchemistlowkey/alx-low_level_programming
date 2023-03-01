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
	n = 0;
	a = &n;
	printf("%d, ", a[n]);
}
