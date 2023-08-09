#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * argstostr - concatenates all the arguments of a program
 * @ac: argument count
 * @av: argument vector
 * Return: result
 */
char *argstostr(int ac, char **av)
{
	char *result;
	int i, position = 0, total_length = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		total_length += strlen(av[i]) + 1 + 1;
	}
	result = (char *)malloc(total_length * sizeof(char));
	if (result == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		strcpy(result + position, av[i]);
		position += strlen(av[i]);
		result[position++] = '\n';
	}
	result[position] = '\0';
	return (result);
}
