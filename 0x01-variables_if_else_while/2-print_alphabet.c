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
	int ch;
	int l;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
		l = tolower(ch);
		putchar(l);
	}

	return (0);
}
