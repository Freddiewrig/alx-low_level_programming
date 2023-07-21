#include "main.h"
/**
 * more_numbers - prints 1 - 14 10 times
 * Return: 0 (success)
 */
void more_numbers(void)
{
	int i, j, k;

	for (i = 1; i <= 10; i++)
	{
		for (k = 0; k <= 14; k++)
		{
			j = k;
			if (k > 9)
			{
				_putchar(1 + 48);
				j = k % 10;
			}
			_putchar(j + 48);
		}
		_putchar('\n');
	}
}
