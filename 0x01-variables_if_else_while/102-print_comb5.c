#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 (success)
 */
int main(void)
{
	int combo;
	int first_tens, first_ones;
	
	for (combo = 0; combo <= 99; combo++)
	{
		first_tens = combo / 10;
		first_ones = combo % 10;

		putchar('0' + first_tens);
		putchar('0' + first_ones);

		if (combo < 99)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}
