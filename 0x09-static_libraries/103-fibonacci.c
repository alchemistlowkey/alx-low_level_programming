#include <stdio.h>
/**
 * main - sum of even fibonacci
 * Return: 0 (success)
 */
int main(void)
{
	int i;
	unsigned long a;
	unsigned long b;
	unsigned long c;
	unsigned long d;

	a = 1;
	b = 2;
	d = 0;
	for (i = 1; i <= 33; ++i)
	{
		if (a < 4000000 && (a % 2) == 0)
		{
			d = d + a;
		}
		c = a + b;
		a = b;
		b = c;
	}
	printf("%lu\n", d);
	return (0);
}
