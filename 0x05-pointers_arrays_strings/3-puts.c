#include "main.h"
#include <stdio.h>
/**
 * _puts - function to print a string
 * @str: string
 *
 * Return: Always 0.
 */
void _puts(char *str)
{
	int i = 0;

	if (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
