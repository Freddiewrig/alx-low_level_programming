#include <stdio.h>
#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index.
 * @index: index
 * @n: number
 * Return: the value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 31)
	{
		return (-1);
	}
	return ((n >> index) & 1);
}
