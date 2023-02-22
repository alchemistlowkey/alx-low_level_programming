#include "main.h"
/**
 * main - for a putchar printout
 * Return: 0 (success)
 */
int main(void)
{
	int al;
	int l;

	for (al = 'a'; al <= 'z'; al++)
	{
		l = tolower(al);
		_putchar(l);
	}
	_putchar('\n');
	return (0);
}
