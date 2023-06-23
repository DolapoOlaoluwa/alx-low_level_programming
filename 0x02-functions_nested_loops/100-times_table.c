#include "main.h"

/**
 * print_times_table - Prints time table
 * @n: number of table to print
 * Return: nothing
 */

void print_times_table(int n)
{
	int m, mul;
	int num;

	if ((n < 15) && (n > 0))
	{
		for (num = 0; num <= n; num++)
		{
			_putchar('0');
			for (m = 1; m <= n; m++)
			{
				_putchar(',');
				_putchar(' ');
				mul = num * m;
				if (mul < 10)
				{
					_putchar(' ');
				}
				if (mul >= 100)
				{
					_putchar((mul / 100) + '0');
					_putchar(((mul / 10) % 10) + '0');
				}
				else if (mul < 100 && mul >= 10)
				{
					_putchar((mul / 10) + '0');
				}
				_putchar((mul % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
