#include "variadic_functions.h"

/**
 * print_strings - prints numbers, followed by a new line.
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 * @...: ellipse in c.
 * Return: Nothing.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i = 0;
	char *current_arg;

	va_start(args, n);

	while (i < n)
	{
		current_arg = va_arg(args, char *);
		if (current_arg)
			printf("%s", current_arg);
		else
			printf("nil");

		if (separator && i < n - 1)
			printf("%s", separator);
		i++;
	}
	printf("\n");

	va_end(args);
}
