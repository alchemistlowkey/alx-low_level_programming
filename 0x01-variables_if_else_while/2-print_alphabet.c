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
	char l;

	for (;; c++)
	{
		putchar(c);
		l = tolower(c);
		putchar(l);
	}

	return (0);
}
