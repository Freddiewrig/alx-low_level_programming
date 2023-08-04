#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @s: pointer to n bytes
 * @n: bytes of memory
 * @b: constant byte pointed at n
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) = b;
	return (s);
}
