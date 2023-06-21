#include "main.h"

/**
 * times_table - print times table 9
 * Return: Nothing
 */

void times_table(void)
{
	int m, n;
	int mul;

	for (m = 0; m <= 9; m++)
	{
		_putchar('0');
		for (n = 1; n <= 9; n++)
		{
			_putchar(',');
			__putchar(' ');
			mul = m * n;
			if (mul < 10)
			{
				_putchar(' ');
			}
			else
			{
				_putchar((mul / 10) + '0');
			}
			_putchar((mul % 10) + '0');
		}
		_putchar('\n');
	}
}
