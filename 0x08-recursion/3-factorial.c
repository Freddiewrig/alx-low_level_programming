#include "main.h"
/**
 * factorial - returns the factorial of a given number
 * @n: input
 * Return: -1 if les than 0
 */
int factorial(int n)
{
	if (n == 0 || n == 1)
		return (1);
	return (n * factoral(n - 1));
}
