#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 ( success)
 */
int main(void)
{
	long int sum = 0, a = 1, b = 2, temp;

	while (a <= 4000000)
	{
		if (a % 2 == 0)
			sum += a;
		temp = a + b;
		a = b;
		b = temp;
	}
	printf("%ld\n", sum);
	return (0);
}
