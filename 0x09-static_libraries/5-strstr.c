#include "main.h"
#include <stddef.h>
/**
 * _strstr - locates a substring
 * @haystack: first string
 * @needle: string to be located in haystack
 * Return: s or null
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *start = haystack;
		char *end = needle;

		while (*haystack && *end && *haystack == *end)
		{
			haystack++;
			end++;
		}
		if (!*end)
			return (start);
		haystack = (start + 1);
	}
	return (NULL);
}
