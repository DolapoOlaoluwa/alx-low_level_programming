#include <stdio.h>

/**
 * main - Entry point
 * Return: 0 always
 */

int main(void)
{
	int first_digit = 0;
	int second_digit;

	for (; first_digit < 9; first_digit++)
	{
		for (second_digit = first_digit + 1; second_digit < 10; second_digit++)
		{
			putchar((first_digit % 10) + '0');
			putchar(second_digit % 10 + '0');
			if (first_digit == 8 && second_digit  == 9)
			{
				continue;
			}
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
