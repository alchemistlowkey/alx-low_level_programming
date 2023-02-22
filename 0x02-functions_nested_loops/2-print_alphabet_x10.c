#include "main.h"
/**
 * print_alphabet_x10 - for a putchar alphabet printout
 */
void print_alphabet_x10(void)
{
	int al;
	int r;

	r = 0;

	while (r < 10)
	{
		al = 97;
		while (al <= 122)
		{
			_putchar(al);
			al++;
		}
		_putchar('\n');
		r++;
	}
}
