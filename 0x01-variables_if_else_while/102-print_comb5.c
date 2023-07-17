#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry
 * Return: 0 (success)
 */
int main(void)
{
	int first_tens;
	int first_ones;
	int second_tens;
	int second_ones;
	int combo, combo2;

	for (combo = 0; combo <= 99; combo++)
	{
		first_tens = combo / 10;
		first_ones = combo % 10;

		for (combo2 = 0; combo2 <= 99; combo2++)
		{
			second_tens = combo2 / 10;
			second_ones = combo2 % 10;

			if (first_tens < second_tens ||
					(first_tens == second_tens && first_ones < second_ones))
			{
				putchar(first_tens + '0');
				putchar(first_ones + '0');
				putchar(' ');
				putchar(second_tens + '0');
				putchar(second_ones + '0');

				if (!(first_tens == 9 && first_ones == 8))
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
