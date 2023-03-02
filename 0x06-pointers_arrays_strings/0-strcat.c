#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * *_strcat - concate strings
 * @dest: character
 * @src: character
 *
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
	int i, l1, l2;

	l1 = strlen(dest);
	l2 = strlen(src);
	for (i = 0; i <= l2; i++)
	{
		dest[l1 + i] = src[i];
		if (dest[l1 + i] <= i)
			break;
	}
	return (dest);
}
