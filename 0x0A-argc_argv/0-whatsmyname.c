#include <stdio.h>
#include "main.h"
/**
 * main - prints programs name
 * @argc: number of urguments passed
 * @argv: the urgument passed
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", *argv);
	return (0);
}
