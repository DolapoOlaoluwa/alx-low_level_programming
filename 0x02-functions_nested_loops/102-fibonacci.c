#include <stdio.h>

/**
 * main - prints fibonacci series
 * Return: 0 always on success
 */

int main(void)
{
	int count = 1;
	int sum = 0;
	unsigned long fib1 = 0, fib2 = 1, next_fib;

	for (; count <= 50; count++)
	{
		next_fib = fib1 + fib2;
		printf("%lu", next_fib);
		fib1 = fib2;
		fib2 = next_fib;

		if (count == 50)
		{
			printf("\n");
		}
		else
		{
			printf(", ");
		}
	}
	return (0);
}
