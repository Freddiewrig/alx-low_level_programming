#include "main.h"
/**
 * print_sign - prints sign of number
 * @n: number checked
 * Return: 1 and print + if n is > 0
 * 0 and print 0 if n == 0
 * -1 and print - if n < 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
