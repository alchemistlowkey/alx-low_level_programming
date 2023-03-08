#include "main.h"
#include <stdio.h>
#include <string.h>
#include <math.h>

/**
 * _pow - square
 * @i: integer
 * @n: integer
 * Return: (-1)
 */
int _pow(int i, int n)
{
	if (i % (n / i) == 0)
	{
		if (i * (n / i) == n)
		{
			return (1);
		}
		else
		{
			return (-1);
		}
	}
	return (0 + _pow(n, i + 1));
}
/**
 * _sqrt_recursion - square root recursion
 * @n: integer
 * Return: Nothing.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (0);
	}
	if (n == 1)
	{
		return (1);
	}
	return (_pow(n, 2));
}
