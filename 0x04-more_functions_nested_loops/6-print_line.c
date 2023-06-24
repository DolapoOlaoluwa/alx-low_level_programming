#include "main.h"

/**
 * print_line - print line
 * @n: the number of times the character _ should be printed
 * Return: nothing
 */

void print_line(int n)
{
	int i = 0;

	if (n > 0)
	{
		for (; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
