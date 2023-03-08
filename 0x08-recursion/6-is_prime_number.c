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
	if (n % 2 == 0 || n % 3 == 0 || n % 5 == 0 || n % 7 == 0 || n == 1 || n < 0)
	{
		return (0);
	}
	else
		return (1);
}
