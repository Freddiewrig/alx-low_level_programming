#include "main.h"
/**
 * _strlen - length of a string
 * @s: pointer to string
 * Return: len (success)
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
