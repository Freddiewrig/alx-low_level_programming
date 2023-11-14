#include "main.h"
/**
 * _strncat - Concatenates n characters of two strings
 * @dest: The destination buffer
 * @src: The source string
 * @n: The number of characters to concatenate
 *
 * Return: Returns a pointer to the destination string.
 */
char *_strncat(char *dest, char *src, int n)
{
	char *d = dest;
	int i = 0;

	while (*d != '\0')
	{
		d++;
	}
	while (*src != '\0' && i < n)
	{
		*d = *src;
		d++;
		src++;
		i++;
	}
	*d = '\0';
	return (dest);
}
