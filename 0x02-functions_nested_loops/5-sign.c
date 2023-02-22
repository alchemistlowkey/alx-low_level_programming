#include "main.h"
/**
 * print_sign - for a putchar alphabet printout
 * @n: prints sign
 * Return: -1 0 and 1
 */
int print_sign(int n)
{
	if (n > 0)
		_putchar(43);
		return (1);
	else if (n == 0)
		_putchar(48);
		return (0);
	else
		_putchar(45);
		return (-1)
}
