#include <stdio.h>
/**
 * main - first 50 fibonacci numbers
 * Return: 0 (success)
 */
int main(void)
{
	int i;
	unsigned long a;
	unsigned long b;
	unsigned long c;

	a = 0;
	b = 1;
	for (i = 0; i < 50; i++)
	{
		c = a + b;
		printf("%lu", c);
		a = b;
		b = c;
		if (i == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
