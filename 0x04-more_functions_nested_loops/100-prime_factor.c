#include <stdio.h>
#include <math.h>
/**
 * _sqrt - finds the square root
 * @x: input number
 * Return: square root x
 */
double _sqrt(double x)
{
	float sqrt, temp;

	sqrt = x / 2;
	temp = 0;

	while (sqrt != temp)
	{
		temp = sqrt;
		sqrt = (x / temp + temp) / 2;
	}
	return (sqrt);
}
/**
 * main - Entry point
 * Return: 0 (success)
 */
int main(void)
{
	long int i;
	long int k;
	long int max;

	i = 612852475143;
	max = -1;

	while (i % 2 == 0)
	{
		max = 2;
		i /= 2;
	}
	for (k = 3; k <= sqrt(i); k += 2)
	{
		while (i % k == 0)
		{
			max = k;
			i = i / k;
		}
	}
	if (i > 2)
		max = i;
	printf("%ld\n", max);
	return (0);
}
