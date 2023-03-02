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
	int l1, l2;

	l1 = strlen(dest);
	l2 = strlen(src);
	for (n = 0; n <= l2; n++)
	{
		dest[l1 + n] = src[n];
		if (dest[l1 + n] <= n)
			break;
	}
	return (dest);
}
