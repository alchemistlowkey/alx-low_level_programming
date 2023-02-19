#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <ctype.h>

/**
 * main - possible combinations of 0 and 1
 * Return: 0 (success)
 */

int main(void)
{
	int i;
	int j;
	int k;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
		for (j = 48; i < 58; j++)
		{
			k = ("ij");
			putchar(k);
			if (k != 57)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
