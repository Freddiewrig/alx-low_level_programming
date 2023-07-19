#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 ( success)
 */
int main(void)
{
	unsigned int a = 1, b = 2, temp;
	int count = 2;

	printf("%u, %u", a, b);
	while (count < 98)
	{
		temp = a + b;
		printf(", %u", temp);
		a = b;
		b = temp;
		count++;
	}
	printf("\n");
	return (0);
}
