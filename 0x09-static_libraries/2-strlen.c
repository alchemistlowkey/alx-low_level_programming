#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strlen - length of a string
 * @s: character
 *
 * Return: s
 */
int _strlen(char *s)
{
	int i = 0;

	for (; *s++;)
		i++;
	return (i);
}
