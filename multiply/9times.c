#include <stdio.h>
int main(void){
	int number;
	printf("Enter number: ");
	scanf("%d", &number);

	int i = 1;

	while (i <= 10)
	{
	int times = number * i;
	printf("%d*%d %d\n", number, i, times);
	i += 1;
	}
	return (0);
}
