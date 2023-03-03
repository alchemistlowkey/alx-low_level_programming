#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * *leet - capitalize all letters
 * @c: character type
 *
 * Return: c.
 */
char *leet(char *c)
{
	int i, j;
	char alpha[] = "aAeEoOtTlL";
	char num[] = "4433007711";

	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; j < 8; j++)
		{
			if (c[i] == alpha[j])
			{
				c[i] = num[j];
			}
		}
	}
	return (c);
}
