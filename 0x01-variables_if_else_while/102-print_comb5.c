#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 (success)
 */
int main(void)
{
	int i = 0;
	int j = 0;

	while (i < 100)
	{
		j = i + 1;
		while (j < 100)
		{
			putchar(i / 10 + '0');
			putchar(i % 10 + '0');
			putchar(' ');
			putchar(j / 10 + '0');
			putchar(j % 10 + '0');
			if (i == 98 && j == 99)
			{
				exit;
			}
			putchar(',');
			putchar(' ');
			j++;
		}
		i++;
	}
	return (0);
}
