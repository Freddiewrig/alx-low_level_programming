#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * _putchar - Writes a character to stdout
 * @c: The character to be written
 *
 * Return: On success, returns the character written.
 * On error, returns EOF.
 */
int _putchar(char c)
{
	return (fputc(c, stdout));
}
