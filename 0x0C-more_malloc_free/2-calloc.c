#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * _calloc - allocates memory for an array.
 * @nmemb: unsigned integer
 * @size: unsigned integer
 * Return: c
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *c;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	c = malloc(nmemb * size);
	if (c == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		c[i] = 0;
	return (c);
}
