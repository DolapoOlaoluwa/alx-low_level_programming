#include "main.h"

/**
 * set_string- sets the value of a pointer to a char.
 * @s: double pointer
 * @to: character to se the value of the double pointer to.
 * Return: nothing.
 */
void set_string(char **s, char *to)
{
	*s = to;
}
