#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <ctype.h>

/**
 * main - all characters to lower case in reverse
 * Return: 0 (success)
 */

int main(void)
{
	int ch;
	int l;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		l = tolower(ch);
		putchar(l);
	}
	putchar('\n');
	return (0);
}
