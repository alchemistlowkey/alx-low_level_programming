#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strlen - length of a string
 * @s: character
 * Return: s
 */
int _strlen(char *s)
{
        int i = 0;

        for (i = 0; s[i] != '\0';)
                i++;
        return (i);
}

/**
 * *_strncpy - copy strings
 * @dest: character
 * @src: character
 * Return: dest character
 */
char *_strcpy(char *dest, char *src)
{
        int i;

        for (i = 0; src[i] != '\0'; i++)
        {
                dest[i] = src[i];
        }
        dest[i] = '\0';
        return (dest);
}

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
