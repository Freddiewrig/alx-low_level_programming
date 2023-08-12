#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * array_range - creates an array of integers
 * @min: minimum
 * @max: maximum
 * Return: array pointer
 */
int *array_range(int min, int max)
{
	int size, i;
	int *final;

	if (min > max)
	{
		return (NULL);
	}
	size = max - min + 1;

	final = (int *)malloc(size * sizeof(int));
	if (final == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		final[i] = min + i;
	}
	return (final);
}
