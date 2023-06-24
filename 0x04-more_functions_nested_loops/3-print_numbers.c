#include "main.h"

/**
 * print_numbers - print numbers
 * Return: nothing
 */

void print_numbers(void)
{
	int i = 0;

	for (; i <= 9; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
