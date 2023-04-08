#include "main.h"

/**
 * print_binary - Decimal to binary conversion
 * @n: unsigned long integer
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned int i, j, ref = 32768;

	if (n == 0)
	{
		_putchar(48);
	}
	for (i = 0; ref; i++)
	{
		if (j == 1 && (n & ref) == 0)
		{
			_putchar(48);
		}
		else if ((n & ref) != 0)
		{
			_putchar(49);
			j = 1;
		}
		ref >>= 1;
	}
}
