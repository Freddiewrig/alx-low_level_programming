#include "main.h"
/**
 * _memcpy - copies memory area
 * @n: bytes of space
 * @src: memory space copied from
 * @dest: memory space copied to
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) = *(src + i);
	return (dest);
}
