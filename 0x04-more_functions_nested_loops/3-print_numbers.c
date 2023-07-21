#include "main.h"
#include <unistd.h>
/**
 * print_numbers - prints numbers
 * Return: void
 */
void print_numbers(void)
{
	int num = 0;

	do {
		_putchar(num + 48);
		num++;
	} while (num >= 0 && num <= 9);
	_putchar('\n');
}
