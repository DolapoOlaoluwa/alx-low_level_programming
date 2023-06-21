#include "main.h"

/**
 * print_alphabet_x10 - prints lowercase alphabet ten times
 * Return: nothing
 */

void print_alphabet_x10(void)
{
	int n;
	char alpha;

	for (n = 0; n < 10; n++)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
		_putchar('\n');
	}
}
