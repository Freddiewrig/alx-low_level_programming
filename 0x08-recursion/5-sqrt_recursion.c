#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number
 * natural square root using binary search
 * @n: The non-negative integer for which to calculate the square root
 * Return: The natural square root of n,
 * or -1 if n does not have a natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		return (_sqrt_recursion_new(n, 1, n));
	}
}
/**
 * _sqrt_recursion_new - Helper function to calculate the
 * @low: staring value
 * @high: lower search value
 * @n: The non-negative integer for which to calculate the square root
 * Return: The natural square root of n, or -1
 * if n does not have a natural square root
 */

int _sqrt_recursion_new(int n, int low, int high)
{
	int mid = (low + high) / 2;

	if (mid * mid == n)
	{
		return (mid);
	}
	else if (mid * mid > n)
	{
		return (_sqrt_recursion_new(n, low, mid - 1));
	}
	else
	{
		if ((mid + 1) * (mid + 1) > n)
		{
			return (mid);
		}
		else
		{
			return (_sqrt_recursion_new(n, mid + 1, high));
		}
	}
}
