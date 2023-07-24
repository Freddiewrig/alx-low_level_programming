#include "main.h"
/**
 * print_rev - prints string in reverse
 * @s: points to the string
 * Return: string
 */
void print_rev(char *s)
{
	int temp = 0;
	int j;

	while (*s != '\0')
	{
		temp++;
		s++;
	}
	s--;
	for (j = temp; j > 0; j--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
