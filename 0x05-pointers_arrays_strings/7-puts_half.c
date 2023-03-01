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

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = i / 2;)
		{
			if (strlen(str[i]) < j)
			{
				continue;
			}
		}
		_putchar(str[i]);
	}
	_putchar('\n');
}
