#include <stdio.h>
#include "main.h"
/**
 * main - prints programs name
 * @argc: number of urguments passed
 * @argv: the urgument passed
 * Return: 0 (success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{

	printf("%s\n", argv[0]);
	return (0);
}
