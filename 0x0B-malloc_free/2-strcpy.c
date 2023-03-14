#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * *_strcpy - copy strings
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
