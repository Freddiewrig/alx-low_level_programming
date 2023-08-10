#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: memory space
 * Return: end  or NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len_s1, len_s2, copy_len;
	char *end;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	len_s1 = strlen(s1);
	len_s2 = strlen(s2);
	if (n >= len_s2)
		copy_len = len_s2;
	else
		copy_len = n;
	end = (char *)malloc(len_s1 + copy_len + 1);
	if (end == NULL)
		return (NULL);
	strncpy(end, s1, len_s1);
	strncpy(end + len_s1, s2, copy_len);
	end[len_s1 + copy_len] = '\0';
	return (end);
}
