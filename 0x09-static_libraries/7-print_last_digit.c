#include "main.h"
/**
 * print_last_digit - A function that prints the last digit of a number
 * @i: last digit
 * Return: j
 */
int print_last_digit(int i)
{
	int j;

	if (i < 0)
		i = -i;

	j = i % 10;

	if (j < 0)
		j = -j;
	_putchar(j + '0');
	return (j);
}
