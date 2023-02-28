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
	int i;

	for (i = 0; str[1] != '\0'; i++)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
