#include "main.h"
/**
 * print_alphabet - Entry point
 * prints alphabets in lowercase
 * Return: 0 (success)
 */
void print_alphabet(void)
{
	char letter;

		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
	_putchar('\n');
}
