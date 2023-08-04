#include <stdio.h>
/**
 * main - prints programs name
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	printf("number of commands: %d\n", argc);
	printf("name of the program: %s\n", argv[0]);
	return (0);
}
