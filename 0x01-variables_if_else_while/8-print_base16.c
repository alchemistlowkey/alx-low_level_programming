#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <ctype.h>

/**
 * main - all characters to lower case of base 16
 * Return: 0 (success)
 */

int main(void)
{
	int num;
	int l;
	char ch;

	for (num = 0; num < 10; num++)
	{
		putchar((num % 10) + '0');
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		l = tolower(ch);
		putchar(l);
	}
	putchar('\n');
	return (0);
}
