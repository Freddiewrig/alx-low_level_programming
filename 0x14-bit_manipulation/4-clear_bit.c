#include <stdio.h>
#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: number
 * @index: index
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 31)
	{
		return (-1);
	}
	*n &= ~(1 << index);
	return (1);
}
