#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strspn - length of a prefix
 * @s: pointer
 * @accept: pointer
 * Return: Nothing.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int l, i, j;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + 1) == *(accept + j))
			{
				l = strlen(accept + j);
				break;
			}
		}
	}
	return (l);
}
