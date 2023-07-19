#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 ( success)
 */
int main(void)
{
	int counter;
	unsigned long int a = 0;
	unsigned long int b = 1;
	unsigned long int next = 0;

	while (counter < 98)
	{
		next = a + b;
		a = b;
		b = next;
		printf("%lu", next);
		if (counter < 97)
			printf(", ");
		counter++;
	}
	putchar('\n');
	return (0);
}
