#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * *_strncat - concate strings
 * @dest: character
 * @src: character
 * @n: integer
 * Return: dest character
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;
	int l1, l2;

	l1 = strlen(dest);
	l2 = strlen(src);
	for (i = 0; i <= l2 && dest[i] != '\0'; i++)
	{
		for (j = 0; j < n && src[j] != '\0'; j++)
		{
			dest[l1] = src[j];
		}
	}
	dest[l1 + i] = src[i];
	dest[i] = '\0';
	return (dest);
}
