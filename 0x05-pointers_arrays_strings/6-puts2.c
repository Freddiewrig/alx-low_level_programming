#include "main.h"
/**
 * puts2 - prints characters
 * @str: string to print
 * Return: string starting with new char
 */
void puts2(char *str)
{
	int i;
	char *b = str;
	int a = 0;
	int c = 0;

	while (*b != '\0')
	{
		b++;
		a++;
	}
	c = a - 1;
	for (i = 0; i <= c; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
