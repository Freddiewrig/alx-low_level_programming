#include "main.h"
#include <stddef.h>
/**
 * _strchr -  locates a character in a string
 * @c: character to be located
 * @s: the string
 * Return: s if c is found or null if not
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
			if (c == '\0')
			{
				return (s);
			}
	return (NULL);
}
