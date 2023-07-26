#include "main.h"
/**
 * char *string_toupper - changes to upper
 * @str: input
 * Return: uppercase
 */
char *string_toupper(char *str)
{
	char *p = str;

	while (*p)
	{
		if (*p >= 'a' && *p <= 'z')
		{
			*p -= 32;
		}
		p++;
	}
	return (str);
}
