#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strcmp - string compare
 * @s1: character
 * @s2: character
 * Return: Always 0.
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	}
	return (0);
}
