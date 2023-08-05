#include <stdio.h>
#include <stdlib.h>
/**
 * main - calculates the minimum number of coins to make change
 * @argc: the number of command-line arguments
 * @argv: the array of command-line argument strings
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	unsigned int num_coins = 0, i;
	int cents;
	unsigned int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; i < sizeof(coins) / sizeof(coins[0]); i++)
	{
		num_coins += cents / coins[i];
		cents %= coins[i];
	}
	printf("%d\n", num_coins);
	return (0);
}
