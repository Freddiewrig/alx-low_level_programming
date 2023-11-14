#include "main.h"
/**
 * _islower - Checks if a character is lowercase
 * @c: The character to be checked
 *
 * Return: Returns 1 if the character is lowercase, 0 otherwise.
 */
int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}