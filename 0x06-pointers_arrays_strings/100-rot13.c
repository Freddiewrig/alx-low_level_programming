#include "main.h"
/**
 * char *rot13 - encodes a string using rot13
 * @s: pointer to the string
 * Return: s
 */
char *rot13(char *s)
{
	int i;
	char c;

	for (i = 0; s[i] != '\0'; i++)
	{
		c = s[i];
		if (c >= 'a' && c <= 'z')
		{
			c = ((c - 'a' + 13) % 26) + 'a';
		}
		else if (c >= 'A' && c <= 'Z')
		{
			c = ((c - 'A' + 13) % 26) + 'A';
		}
		s[i] = c;
	}
	return (s);
}
