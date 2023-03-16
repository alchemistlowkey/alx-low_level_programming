#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * string_nconcat - concatenates strings.
 * @s1: character
 * @s2: character
 * @n: unsigned integer
 * Return: c
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *c;
	unsigned int i, j, k, l;

	if (s1 == NULL || s2 == NULL)
		s1 = s2 = NULL;
	for (i = 0; s1[i] != '\0';)
		i++;
	for (j = 0; s2[j] != '\0';)
		j++;
	if (n > j)
		n = j;
	k = i + n;
	c = malloc((sizeof(char) * k) + 1);
	if (c == NULL)
		return (NULL);
	for (l = 0; l < k; l++)
	{
		if (l < i)
			c[l] = s1[l];
		else
			c[l] = s2[l - i];
	}
	c[l] = '\0';

	return (c);
}
