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
	unsigned int l, i;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if ((s + 1) == accept)
		{
			l = strlen(accept);
		}
	}
	return (l);
}
