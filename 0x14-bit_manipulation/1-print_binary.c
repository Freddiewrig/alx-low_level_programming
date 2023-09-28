#include "main.h"
#include <stdio.h>
/**
 * print_binary -  prints the binary representation of a number.
 * @n: number
 */
void print_binary(unsigned long int n)
{
	while (n)
	{
		if (n & 1)
		{
			printf("1");
		}
		else
		{
			printf("0");
		}
		n >>= 1;
	}
}
