#include "main.h"
/**
 * main - for a putchar printout
 * Return: 0 (success)
 */
int main(void)
{
	int al;

	for (al = 97; al <= 122; al++)
	{
		_putchar(al);
	}
	_putchar('\n');
	return (0);
}
