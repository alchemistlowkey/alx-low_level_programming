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
	int i, j, len1, len2;

	len1 = strlen(haystack);
	len2 = strlen(needle);
	for (i = 0; i < len1; i++)
	{
		for (j = 0; j < len2; j++)
		{
			if (haystack[i + j] != needle[j])
				break;
			if (j == len2)
			{
				return (i);
				break;
			}
		}
	}
	return (i);
}
