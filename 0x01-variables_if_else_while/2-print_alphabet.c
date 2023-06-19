#include <stdio.h>

/**
 * main - Entry Point
 * Return: 0 Always success
 */

int main(void)
{
	char alpha = 'a';

	for (; alpha <= 'z'; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
