#include <stdio.h>
#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The input number.
 */
void print_binary(unsigned long int n)
{
	int i;
	unsigned long int mask;
	int max_bits = sizeof(unsigned long int) * 8;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	for (i = max_bits - 1; i >= 0; i--)
	{
		mask = 1UL << i;
		if (n & mask)
			_putchar('1');
		else
			_putchar('0');
	}
}
