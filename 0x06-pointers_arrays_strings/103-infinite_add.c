#include "main.h"
/**
 * rev_string - reverse array
 * @n: integer params
 * Return: 0
 */

void rev_string(char *n)
{
	int i = 0;
	int j = 0;
	char temp;

	while (*(n + i) != '\0')
	{
		i++;
	}
	i--;

	for (j = 0; j < i; j++, i--)
	{
		temp = *(n + j);
		*(n + j) = *(n + i);
		*(n + i) = temp;
	}
}
/**
 * infinite_add - adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: buffer
 * @size_r: size of buffer
 * Return: 0
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = 0, len2 = 0, carry = 0, sum = 0;
	int val1 = 0, val2 = 0, temp = 0;

	while (*(n1 + len1) != '\0')
		len1++;
	while (*(n2 + len2) != '\0')
		len2++;
	len1--;
	len2--;
	if (len1 >= size_r || len2 >= size_r)
		return (0);
	while (len1 >= 0 || len2 >= 0 || carry == 1)
	{
		if (len1 < 0)
			val1 = 0;
		else
			val1 = *(n1 + len1) - '0';
		if (len2 < 0)
			val2 = 0;
		else
			val2 = *(n2 + len2) - '0';
		temp = val1 + val2 + carry;
		if (temp >= 10)
			carry = 1;
		else
			carry = 0;
		if (sum >= (size_r - 1))
			return (0);
		*(r + sum) = (temp % 10) + '0';
		sum++;
		len1--;
		len2--;
	}
	if (sum == size_r)
		return (0);
	*(r + sum) = '\0';
	rev_string(r);
	return (r);
}
