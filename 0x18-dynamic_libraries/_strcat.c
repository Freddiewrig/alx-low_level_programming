#include "main.h"
/**
 * _strcat - Concatenates two strings
 * @dest: The destination buffer
 * @src: The source string
 *
 * Return: Returns a pointer to the destination string.
 */
char *_strcat(char *dest, char *src)
{
	char *d = dest;

	while (*d != '\0')
	{
		d++;
	}
	while (*src != '\0')
	{
		*d = *src;
		d++;
		src++;
	}
	*d = '\0';
	return (dest);
}
