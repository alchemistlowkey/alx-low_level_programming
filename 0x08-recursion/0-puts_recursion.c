#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _puts_recursion - Recursion puts
 * @s: character
 * Return: Nothing.
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
