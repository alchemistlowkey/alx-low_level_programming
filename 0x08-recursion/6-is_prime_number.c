#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * is_prime_number - prime number check
 * @n: integer
 * Return: Nothing.
 */
int is_prime_number(int n)
{
	int i;

	for (i = 2; i < 10; i++)
	{
		if (n % i == 0 || n == 1 || n < 0)
		{
			return (0);
		}
	}
	return (1);
}
