#include <stdio.h>
#include "main.h"
/**
 * main - prints number of urguments
 * @argc: prints number of urguments
 * @argv: urguments passed
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
