#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *_strdup - pointer return
 * @str: character
 * Return: Nothing.
 */
char *_strdup(char *str)
{
	int i;
	char *c;

	if (str == 0)
	{
		return (NULL);
	}
	i = _strlen(str) + 1;
	c = (char *) malloc(i * sizeof(*c));
	if (c == 0)
	{
		return (NULL);
	}
	_strcpy(c, str);
	return (c);
}
