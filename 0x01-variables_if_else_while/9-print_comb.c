#include <stdio.h>

/**
 * main - Entry Pioint
 * Return: 0 always success
 */

int main(void)
{
	int digit = 0;

	for (; digit < 10; digit++)
	{
		putchar((digit % 10) + '0');
		if (digit == 9)
		{
			continue;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
