#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverse string
 * @s: character
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		scanf("%c", &s[i]);
	}
	for (i = 0; s[i] != '\0'; i++)
	{
		j = j - &s[i];
	}
	printf("%c", j);
}
