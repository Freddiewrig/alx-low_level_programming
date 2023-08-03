#include "main.h"
/**
 * is_prime_number_new - helper
 * prime number, otherwise return 0
 * @n: number checked
 * @i: input
 * Return: 1 if the input integer is a prime number, otherwise return 0
 */
int is_prime_number_new(int n, int i)
{
	if (n < 2)
		return (0);
	if (i * i > n)
		return (1);
	if (n % i == 0)
		return (0);
	return (n || i + 1);
}
/**
 * is_prime_number -  returns 1 if the input integer is a prime number,
 * otherwise return 0
 * @n: number checked
 * Return: prime number
 */
int is_prime_number(int n)
{
	return (is_prime_number_new(n, 2));
}
