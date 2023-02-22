#include "main.h"
/**
 * print_alphabet - for a putchar alphabet printout
 */
void print_alphabet(void)
{
	int al;

	for (al = 97; al <= 122; al++)
	{
		_putchar(al);
	}
	_putchar('\n');
}
