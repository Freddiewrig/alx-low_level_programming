#include "main.h"
/**
 * char *_strncat -  concatenates two strings with n bytes
 * @dest: first string
 * @src: second srting
 * @n: number of bytes used
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (j = 0; src[j] != '\0' && j < n; j++)
		dest[i + j] = src[j];
	dest[i + j] = '\0';
	return (dest);
}
