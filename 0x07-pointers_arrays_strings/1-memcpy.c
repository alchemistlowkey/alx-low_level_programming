#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * *_memcpy - memcopy
 * @dest: destination of copy
 * @src: source of copy
 * @n: unsigned integer
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int j;
	int k = n;

	for (j = 0; j < k; j++)
	{
		dest[j] = src[j];
		n--;
	}
	return (dest);
}
