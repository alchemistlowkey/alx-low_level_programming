#include "main.h"

/**
 * puts2 - A function that prints everyother character
 * @str: character
 * Return: Always 0.
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 1)
		{
			continue;
		}
		_putchar(str[i]);
	}
	_putchar('\n');
}
