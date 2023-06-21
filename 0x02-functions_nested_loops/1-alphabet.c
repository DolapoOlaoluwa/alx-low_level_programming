#include "main.h"

/**
 * print_alphabet - Prints alphabet in lower case
 * Return: nothing
 */

void print_alphabet(void)
{
	char alpha = 'a';

	for (; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}
	_putchar('\n');
}
