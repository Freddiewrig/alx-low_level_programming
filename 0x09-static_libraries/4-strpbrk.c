#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string checked
 * @accept: second string
 * Return: s or null
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *a = accept;

		while (*a != '\0')
		{
			if (*s == *a)
			{
				return (s);
			}
			a++;
		}
		s++;
	}
	return (NULL);
}
