#include "main.h"
/**
 * _puts - prints a string followed by new line
 * @str: string
 * Return: 0 (success)
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
