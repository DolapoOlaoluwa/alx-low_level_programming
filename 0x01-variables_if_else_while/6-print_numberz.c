#include <stdio.h>

/**
 * main - Entry point
 * Return: 0 always success
 */

int main(void)
{
	int digit = 0;

	for (; digit < 10; digit++)
	{
		putchar((digit % 10) + '0');
	}
	putchar('\n');
	return (0);
}
