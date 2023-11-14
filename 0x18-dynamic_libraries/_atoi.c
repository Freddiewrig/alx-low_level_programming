#include "main.h"
/**
 * _atoi - Converts a string to an integer
 * @s: The string to be converted
 *
 * Return: Returns the converted integer.
 */
int _atoi(char *s)
{
	int n = 0;
	int sign = 1;

	while (*s == ' ' || *s == '\t')
	{
		s++;
	}
	if (*s == '-')
	{
		sign = -1;
		s++;
	}
	while (*s != '\0')
	{
		if (*s >= '0' && *s <= '9')
		{
			n = n * 10 + *s - '0';
		}
		else
		{
			break;
		}
		s++;
	}
	return (n * sign);
}
