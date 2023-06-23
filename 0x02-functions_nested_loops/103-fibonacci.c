#include <stdio.h>

/**
 * main - prints the sum of even numbers in a fib series
 * Return: 0 always on success
 */

int main(void)
{
	unsigned long fib1 = 0, fib2 = 1, next_fib;
	float even_sum;

	while (1)
	{
		next_fib = fib1 + fib2;

		if (next_fib > 4000000)
		{
			break;
		}
		if (next_fib % 2 == 0)
		{
			even_sum += next_fib;
		}
		fib1 = fib2;
		fib2 = next_fib;

	}
	printf("%.0f\n", even_sum);
	return (0);
}
