#include <stdio.h>

/**
 * main - Entry Point
 * Return: 0 success
 */

int main(void)
{
	int digit = 0;
	char letter = 'a';

	for (; digit < 10; digit++)
	{
		putchar((digit % 10) + '0');
	}
	for (; letter <= 'f'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
