#include "main.h"
/**
 * set_string - sets the value of a pointer to a char
 * @s: Double pointer to char to be updated
 * @to: Pointer to char whose value will be assigned to @s
 */
void set_string(char **s, char *to)
{
        *s = to;
}
