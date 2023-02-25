#include "main.h"

/**
 * print_line - a straight line
 * @n: integer
 * Return: Always 0.
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;

		for (i = 49; i <= n; i++)
		{
			_putchar(95);
		}
		_putchar('\n');
	}
}
