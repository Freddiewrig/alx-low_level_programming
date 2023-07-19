#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 ( success)
 */
int main(void)
{
	int counter;
	unsigned long a = 0;
	unsigned long b = 1;
	unsigned long sum = 0;

	printf("%lu", a);
	for (counter = 0; counter < 97; counter++)
	{
		printf(", %lu", b);
		sum = a + b;
		a = b;
		b = sum;
	}
	printf("\n");
	return (0);
}
