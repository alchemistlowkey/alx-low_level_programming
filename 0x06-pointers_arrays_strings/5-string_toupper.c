#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * *string_toupper - change to upper case
 * @n: character
 * Return: Always 0.
 */
char *string_toupper(char *n)
{
	int i;

	for (i = 0; n[i] != '\0'; i++)
	{
		if (n[i] >= 97 && n[i] <= 122)
		{
			n[i] = n[i] - 32;
		}
	}
	return (0);
}
