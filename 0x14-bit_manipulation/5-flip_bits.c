#include "main.h"
#include <stdio.h>
/**
 * flip_bits -  returns the number of bits you would need to
 * flip to get from one number to another.
 * @n: number
 * @m: flip
 * Return: count
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int xor = n ^ m;

	while (xor)
	{
		if (xor & 1)
		{
			count++;
		}
		xor >>= 1;
	}
	return (count);
}
