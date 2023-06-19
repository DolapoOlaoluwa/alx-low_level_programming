#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 success
 */

int main(void)
{
	char lower_alpha = 'a';
	char upper_alpha = 'A';

	for (; lower_alpha <= 'z'; lower_alpha++)
	{
		putchar(lower_alpha);
	}
	for (; upper_alpha <= 'Z'; upper_alpha++)
	{
		putchar(upper_alpha);
	}
	putchar('\n');
	return (0);
}
