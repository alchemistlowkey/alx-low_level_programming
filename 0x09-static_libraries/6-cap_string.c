#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * *cap_string - capitalize all letters
 * @str: character type
 *
 * Return: Always 0.
 */
char *cap_string(char *str)
{
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (; (str[i] >= 97 && str[i] <= 122); i++)
		{
			j = i - 1;
			if (str[j] == 32 || str[j] == 33 ||
			str[j] == 34 || str[j] == 40 || str[j] == 41 ||
			str[j] == 44 || str[j] == 46 || str[j] == 59 ||
			str[j] == 63 || str[j] == 123 || str[j] == 124 ||
			str[j] == 125 || str[j] == '\n' || str[j] == '\t' || i == 0
			)
			str[i] = str[i] - 32;
		}
	}
	return (str);
}
