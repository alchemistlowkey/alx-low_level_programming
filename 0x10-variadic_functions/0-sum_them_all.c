#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * sum_them_all - summation function
 * @n: const unsigned integer
 * Return: addition
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, add = 0;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		if (n == 0)
		{
			return (0);
		}
		add += va_arg(args, int);
	}
	va_end(args);
	return (add);
}
