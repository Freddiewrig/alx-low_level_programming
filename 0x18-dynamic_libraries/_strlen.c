#include "main.h"
/**
 * _strlen - Computes the length of a string
 * @s: The string to compute the length for
 *
 * Return: Returns the length of the string.
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
