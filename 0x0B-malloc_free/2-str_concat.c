#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * _strlen - string length
 * @s: character
 * Return: i
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0';)
	{
		i++;
	}
	return (i);
}

/**
 * str_concat - string concatenation
 * @s1: character
 * @s2: character
 * Return: c
 */

char *str_concat(char *s1, char *s2)
{
	char *c;
	unsigned int i, j, size;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	size = (_strlen(s1) + _strlen(s2) + 1);
	c = (char *) malloc(size * sizeof(char));
	if (c == 0)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
		*(c + i) = *(s1 + i);
	for (j = 0; s2[j] != '\0'; j++)
	{
		c[i] = s2[j];
		i++;
	}
	return (c);
}
