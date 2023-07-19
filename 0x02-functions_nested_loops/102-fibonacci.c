#include <stdio.h>
/**
 * main - Entry
 * Return: 0 (success)
 */
int main(void)
{
	long int i, j, k, next;

	j = 1;
	k = 2;
	for (i = 1; i <= 50; ++i)
	{
		if (i != 1)
			printf(", ");
		printf("%ld", j);

		if (j != 20365011075)
		{
			next = j + k;
			j = k;
			k = next;
		}
	}
	printf("\n");
	return (0);
}
