#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * rev_string - print in reverse
 * @s: character
 *
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int i, j;

	i = 0;
	j = strlen(s);
	while (s[i] != '\0')
	for (i = j - 1; i < 1; i--)
	printf("%c", s[i]);
}
