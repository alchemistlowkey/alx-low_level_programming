#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strlen - string length
 * @s: character
 */
int _strlen(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen(s + 1));
	}
}

/**
 * _compare = compare string
 * @s: character
 * @i: integer
 * @j: integer
 * Return: 0
 */
int _compare(char *s, int i, int j)
{
	if (*(s + i) == *(s + j))
	{
		if (i == j || i == j + 1)
			return (1);
		return (0 + _compare(s, i + 1, j - 1));
	}
	return (0);
}

/**
 * is_palindrome - Palindrome check
 * @s: character
 * Return: Nothing.
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (_compare(s, 0, _strlen(s) - 1));
}
