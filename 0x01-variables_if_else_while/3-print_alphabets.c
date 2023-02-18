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
	int u;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		l = tolower(ch);
		putchar(l);
		u = toupper(ch);
		putchar(u);
	}
	putchar('\n');
	return (0);
}
