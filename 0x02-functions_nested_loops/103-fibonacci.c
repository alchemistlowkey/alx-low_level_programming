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
	c = 0;
	for (i = 1; i <= 33; ++i)
	{
		if (a < 4000000 && (a % 2) == 0)
		{
			c = c + a;
		}
		d = a + b;
		a = b;
	}
	printf("%lu\n", sum)
	return (0);
}
