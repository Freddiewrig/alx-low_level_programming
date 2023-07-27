#include "main.h"
/**
 * char *rot13 - encodes a string using rot13
 * @s: pointer to the string
 * Return: s
 */
char *rot13(char *s)
{
	int i, j;
	char data1[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char data2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0', i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == data1[j])
			{
				s[i] = data2[j];
				break;
			}
		}
	}
	return (s);
}
