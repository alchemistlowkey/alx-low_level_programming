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
	int i;

	for (i = 38; i < 48; i++)
	{
		putchar(i);
		if (i != 47)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
