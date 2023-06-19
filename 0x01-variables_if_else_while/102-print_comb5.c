#include <stdio.h>

/**
 * main- Entry point
 * Return: Always 0 (Sucess)
 */

int main(void)
{
	int n = 0;
	int m;

	for (; n < 99; n++)
	{
		for (m = n + 1; m <= 99; m++)
		{
			putchar((n / 10) + '0');
			putchar((n % 10) + '0');
			putchar(' ');
			putchar((m / 10) + '0');
			putchar((m % 10) + '0');
			if (n == 98 && m  == 99)
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
