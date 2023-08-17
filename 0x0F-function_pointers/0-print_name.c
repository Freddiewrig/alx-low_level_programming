#include "function_pointers.h"
/**
 * print_name - prints a name using a given printing function
 * @name: name of person
 * @f: pointer to the printing function
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
