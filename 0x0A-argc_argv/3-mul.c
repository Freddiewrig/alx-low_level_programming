#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints multiple of two passed func
 * atoi - converts to integer
 * @argc: passed functions
 * @argv: prints passed commmands
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	int num1;
	int num2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	printf("%d\n", num1 * num2);
	return (0);
}
