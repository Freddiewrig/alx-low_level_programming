#include "main.h"
/**
 * print_rev - prints string in reverse
 * @s: points to the string
 * Return: string
 */
void print_rev(char *s)
{
	if (*s == '\0')
		return;
	print_rev(s + 1);
	_putchar(*s);
}
