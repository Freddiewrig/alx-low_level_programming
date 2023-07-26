#include "main.h"
/**
 * char *_strncpy - copies a string
 * @dest: string
 * @src: string 2
 * @n: bytes
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	for (j = 0; src[j] != '\0' && j < n; j++)
		dest[j] = src[j];
	while (j < '\0')
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}