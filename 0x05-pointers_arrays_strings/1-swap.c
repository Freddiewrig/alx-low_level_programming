#include "main.h"
/**
 * swap_int - swaps integer a and b
 * @a: first int
 * @b: second int
 * Return: 0 (success)
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
