#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *argstostr - arguments strings
 * @ac: integer
 * @av: character
 * Return: str
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int i = 0, j, k, l = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (j = 0; j < ac; j++)
	{
		for (k = 0; av[j][k] != '\0'; k++)
		{
			i++;
		}
	}
	i = i + ac + 1;
	str = malloc(sizeof(char) * i);
	if (str == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < ac; j++)
	{
		for (k = 0; av[j][k] != '\0'; k++)
		{
			str[l] = av[j][k];
			l++;
		}
		str[l] = '\n';
		l++;
	}
	return (str);
}
