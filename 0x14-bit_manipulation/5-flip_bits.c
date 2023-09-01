#include "main.h"
/**
 * flip_bits - Returns the number of bits you would need to flip.
 * @n: The first number.
 * @m: The second number.
 * Return: The number of bits required to flip to get from n to m.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result = n ^ m;
	unsigned int count = 0;

	while (result)
	{
		count += result & 1;
		result >>= 1;
	}
	return (count);
}
