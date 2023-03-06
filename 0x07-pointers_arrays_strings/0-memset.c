#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * *_memset - 
 * @*s:
 * @b:
 * @n: 
 *
 * Return: Nothing.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;

	for (j = 0; n > 0; j++)
	{
		s[j] = b;
		n--;
	}
	return (s);
}
