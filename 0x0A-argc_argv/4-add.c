#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - adds positive numbers
 * @argv: prints the commands
 * @argc: passed commands
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	if (argc < 2)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			char *ptr = argv[i];

			while (*ptr != '\0')
			{
				if (!isdigit(*ptr))
				{
					printf("Error\n");
					return (1);
				}
				ptr++;
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
