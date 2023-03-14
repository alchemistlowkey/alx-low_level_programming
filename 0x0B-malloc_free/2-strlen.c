#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strlen - length of a string
 * @s: character
 * Return: s
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0';)
		i++;
	return (i);
}
