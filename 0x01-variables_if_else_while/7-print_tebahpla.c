#include <stdio.h>

/**
 * main - Entry Point
 * Return: 0 always success
 */

int main(void)
{
	char alpha = 'z';

	for (; alpha >= 'a'; alpha--)
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
