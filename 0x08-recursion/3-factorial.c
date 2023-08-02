#include "main.h"
/**
 * factorial - prints factorial of given number
 * @n: input integer
 * Return: -1 if n < 0
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
