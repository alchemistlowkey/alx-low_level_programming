#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * wildcmp - comparison
 * @s1: character
 * @s2: character
 * Return: Nothing.
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s1 == '\0' && *(s2 + 1) != '\0' && *s2 == '*')
		return (0);
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	if (*s2 == '*')
		return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
	return (0);
}
