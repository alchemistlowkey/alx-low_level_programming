#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <ctype.h>

/**
 * main - all characters to lower case
 * Return: 0 (success)
 */

int main(void)
{
	char c[] = "a...z";

	for (int i = 0; i < strlen(c); i++)
	{
	c[i] = tolower(c[i]);
	}
	putchar(c);
	return (0);
}
