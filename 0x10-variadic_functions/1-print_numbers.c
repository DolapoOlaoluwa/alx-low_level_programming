#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 * @...: ellipse in c.
 * Return: Nothing.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i = 0;
	int current_arg;

	va_start(args, n);

	while (i < n)
	{
		current_arg = va_arg(args, int);
		printf("%d", current_arg);

		if (separator && i < n - 1)
			printf("%s", separator);
		i++;
	}
	printf("\n");

	va_end(args);
}
