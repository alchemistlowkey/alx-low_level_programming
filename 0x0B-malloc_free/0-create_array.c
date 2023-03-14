#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *create_array - function for character array
 * @size: unsigned integer
 * @c: character
 * Return: Nothing.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *buffer;

	if (size == 0)
	{
		return (NULL);
	}
	buffer = (char *) malloc(size * sizeof(c));
	if (buffer == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			*(buffer + i) = c;
		}
		return (buffer);
	}
}
