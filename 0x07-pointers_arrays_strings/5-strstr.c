#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * *_strstr - string in a string
 * @haystack: string
 * @needle: string
 * Return: Nothing.
 */
char *_strstr(char *haystack, char *needle)
{
	char *b, *c;

	while (*haystack != '\0')
	{
		b = haystack;
		c = needle;
		while (*haystack != '\0' && *c != '\0' && *haystack == *c)
		{
			haystack++;
			c++;
		}
		if (!*c)
			return (b);
		haystack = b + 1;
	}
	return (0);
}
