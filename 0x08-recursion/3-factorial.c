#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * factorial - factorial recursion
 * @n: integer
 * Return: Nothing.
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
