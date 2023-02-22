#include "main.h"
/**
 * print_last_digit - A function that prints the last digit of a number
 * @i: last digit
 * Return: i
 */
int print_last_digit(int i)
{
	for (i = 0; i < 10; i++)
	{
		_putchar((i % 10) + '0');
	}
	return (i);
}
