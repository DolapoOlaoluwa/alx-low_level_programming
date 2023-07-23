#include "variadic_functions.h"

/**
 * sum_them_all - sums all the given argument.
 * @n: number of argument given.
 * @...: ellipse in c, represent arguments.
 * Return: sum, and 0 if n = 0.
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0;
	int sum = 0, current_arg;
	va_list args;

	va_start(args, n);

	while (i < n)
	{
		current_arg = va_arg(args, int);
		sum += current_arg;
		i++;
	}
	return (sum);
	va_end(args);

}
