#include "main.h"
/**
 * print_diagonal - prints diagonal
 * @n: number of times / is printed
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= n; j++)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}
}
