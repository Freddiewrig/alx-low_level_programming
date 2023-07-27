#include "main.h"
#include <string.h>
#include <ctype.h>
/**
 * char *cap_string - capitalize a string
 * @str: string
 * Return: caps string
 */
char *cap_string(char *str)
{
	int i;
	int len = strlen(str);
	int capitalize_next = 1;

	for (i = 0; i < len; i++)
	{
		if (isspace(str[i]) || ispunct(str[i]))
		{
			capitalize_next = 1;
		}
		else if (capitalize_next)
		{
			str[i] = toupper(str[i]);
			capitalize_next = 0;
		}
	}
	return (str);
}
