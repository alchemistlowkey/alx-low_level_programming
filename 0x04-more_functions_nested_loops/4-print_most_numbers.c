#include "main.h"

/**
 * print_most_numbers - from 0 - 9 except 2 and 4
 */
void print_most_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		if (i != 2)
		if (i != 4)
		_putchar(i);
	}
		_putchar('\n');
}
