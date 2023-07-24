#include "main.h"
/**
 * rev_string - reverse string
 * @s: input string
 * Return: reverse string
 */
void rev_string(char *s)
{
	int start = 0;
	char rev = s[0];
	int end;

	while (s[start] != '\0')
		start++;
	for (end = 0; end < start; end++)
	{
		start--;
		rev = s[end];
		s[end] = s[start];
		s[start] = rev;
	}
}
