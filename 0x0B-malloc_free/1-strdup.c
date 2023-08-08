#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * _strdup - alloates space for duplicate strind
 * @str: string
 * Return: duplicate
 */
char *_strdup(char *str)
{
	char *duplicate;
	size_t len = 0;
	size_t i;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[len] != '\0')
	{
		len++;
	}
	duplicate = (char *)malloc((len + 1) * sizeof(char));
	if (duplicate == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= len; i++)
		duplicate[i] = str[i];
	return (duplicate);
}
