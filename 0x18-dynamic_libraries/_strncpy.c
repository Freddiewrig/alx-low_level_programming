#include "main.h"
/**
 * _strncpy - Copies n characters from source to destination
 * @dest: The destination buffer
 * @src: The source string
 * @n: The number of characters to copy
 *
 * Return: Returns a pointer to the destination string.
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *d = dest;
	int i = 0;

	while (*src != '\0' && i < n)
	{
		*d = *src;
		d++;
		src++;
		i++;
	}
	while (i < n)
	{
		*d = '\0';
		d++;
		i++;
	}
	return (dest);
}
