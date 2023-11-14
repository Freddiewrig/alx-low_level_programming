#include "main.h"
/**
 * _strcpy - Copies a string from source to destination
 * @dest: The destination buffer
 * @src: The source string
 *
 * Return: Returns a pointer to the destination string.
 */
char *_strcpy(char *dest, char *src)
{
	char *d = dest;

	while (*src != '\0')
	{
		*d = *src;
		d++;
		src++;
	}
	*d = '\0';
	return (dest);
}
