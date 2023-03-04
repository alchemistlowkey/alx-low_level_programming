#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * *rot13 - rotate alphabets by 13
 * @c: character
 *
 * Return: character c.
 */
char *rot13(char *c)
{
	int i, j;
	char alpha[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char alpharot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (c[i] == alpha[j])
			{
				c[i] = alpharot13[j];
				break;
			}
		}
	}
	return (c);
}
