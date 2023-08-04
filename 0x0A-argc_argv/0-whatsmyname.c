#include <stdio.h>
/**
 * main - prints programs name
 * @argc: number of urguments passed
 * @argv: the urgument passed
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}
