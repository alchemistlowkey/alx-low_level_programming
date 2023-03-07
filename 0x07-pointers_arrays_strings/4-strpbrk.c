#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * *_strpbrk - strpbrk function
 * @s: character
 * @accept: character
 * Return: null
 */
char *_strpbrk(char *s, char *accept)
{
	char *t;

	while (*s != '\0')
	{
		t = accept;
		while (*t != '\0')
		{
			if (*s == *t)
			{
				return ((char *) s);
			}
			t++;
		}
	}
	return ('\0');
}
