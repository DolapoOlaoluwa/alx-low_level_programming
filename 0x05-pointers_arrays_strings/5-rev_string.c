#include "main.h"

/**
 * rev_string- a function that reverses a string.
 * @s: string to be reversed
 * Return: nothing.
 */

void rev_string(char *s)
{
	int i = 0;
	int len = 0;
	char new;

	while (s[len] != '\0')
	{
		++len;
	}
	while (i < len--)
	{
		new = s[i];
		s[i++] = s[len];
		s[len] = new;
	}

}
