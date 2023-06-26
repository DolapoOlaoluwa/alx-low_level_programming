#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line.
 * @size: size of the triangle.
 * Return: Nothing.
 */

void print_triangle(int size)
{
	int height, base;

	if (size > 0)
	{
		for (height = 0; height < size; height++)
		{
			for (base = 0; base < size; base++)
			{
				if (base < size - 1 && height < size - 1)
				{
					_putchar(' ');
				}
				_putchar('#');

			}

			if (height == size - 1)
			{
				continue;
			}
			_putchar('\n');
		}
	}
}
