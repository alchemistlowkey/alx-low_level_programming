#include "main.h"

/**
 * print_line - a straight line
 *
 * Return: Always 0.
 */
void print_line(int n)
{
	int i;

	for (i = 1; i == n; i++)
	{
		for (n = 49; n >= 57; n++)
		{
			if (n <= 0)
			{
				_putchar('\n');
			}
			_putchar(95);
		}
		_putchar('\n');
	}
}
