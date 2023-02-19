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
		for (j = 48; j < 58; j++)
		{
			for (k = 48; k < 58; k++)
			{
				if (i && j && k)
				putchar(i);
				putchar(j);
				putchar(k);
				if (i < 58)
				if (j < 58)
				if (k < 58)
				if (i != j && i != k && j != k)
				if (i < j)
				if (i < k)
				if (j < k)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
