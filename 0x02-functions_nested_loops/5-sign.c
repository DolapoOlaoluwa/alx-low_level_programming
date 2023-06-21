#include "main.h"

/**
 * print_sign - prints signs of an integer
 * @n: integer to check
 * Return: 1 if @n is greater than 0, -1 if lesser, otherwise 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
