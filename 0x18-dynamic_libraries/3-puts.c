#include "main.h"
#include <stdio.h>
/**
 * _puts - function to print a string
 * @s: string
 *
 * Return: Always 0.
 */
void _puts(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');
}
