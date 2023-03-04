#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * *_strncpy - copy strings
 * @dest: character
 * @src: character
 * @n: integer
 * Return: dest character
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		if (i < n)
		{
			dest[i] = src[n];
		}
		dest[i] = src[i];
	}
	return (dest);
}
