#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * is_palindrome - Palindrome check
 * @s: character
 * Return: Nothing.
 */
int is_palindrome(char *s)
{
	int i = 0, j = 0, len;

	len = strlen(s);
	if (*s == '\0')
		return (0);
	if (*(s + i) == *(s + j))
	if (i == j + 1 || i == j)
		return (1);
	return (len - 1);
}
