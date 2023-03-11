#include "main.h"
#include <string.h>

/**
 * puts_half - A function that prints everyother character
 * @str: character
 * Return: Always 0.
 */
void puts_half(char *str)
{
	int i, j;
	int longi;

	longi = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		longi++;
	}
	j = (longi / 2);
	if ((longi % 2) == 1)
		j = ((longi + 1) / 2);
	for (i = j; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
