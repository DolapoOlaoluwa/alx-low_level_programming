#include "main.h"
/**
 * puts2- a function that prints every other
 *	character of a string, starting with the
 *	first character, followed by a new line.
 * @str: string to be reversed.
 * Return: nothing.
 */
void puts2(char *str)
{
	int len = 0;
	int num = 0;
	int new_len;

	while (str[len] != '\0')
	{
		++len;
	}
	new_len = len - 1;

	while (new_len >= num)
	{
		_putchar(str[num]);
		num += 2;
	}
	_putchar('\n');
}
