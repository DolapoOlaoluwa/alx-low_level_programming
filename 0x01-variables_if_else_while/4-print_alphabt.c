#include <stdio.h>

/**
 * main - Entry point
 * Return: 0 always success
 */

int main(void)
{
	char alpha = 'a';

	for (; alpha <= 'z'; alpha++)
	{
		if (alpha != 'q' && alpha != 'e')
		{
			putchar(alpha);
		}
	}
	putchar('\n');
	return (0);
}
