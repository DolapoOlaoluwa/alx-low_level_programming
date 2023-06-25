#include "main.h"

/**
 * print_square - prints a square, followed by a new line.
 * @size: size of the square.
 * Return: Nothing.
 */

void print_square(int size)
{
	int length, breadth;
	if (size > 0)
	{
		for (length = 0; length < size; length++)
		{
			for (breadth = 0; breadth < size; breadth++)
			{
				_putchar('#');
			}
			if (length == size - 1)
			{
				continue;
			}

			_putchar('\n');
		}
	}
	_putchar('\n');
}
