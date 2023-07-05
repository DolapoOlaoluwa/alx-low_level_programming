#include "main.h"

/**
 * _memset - a function that fills memory with a constant byte.
 * @s: character pointer pointing to a memory
 * @b: byte to fill the memory with.
 * @n: number of bytes of the memory to be filled
 * Return: pointer to the memory.
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}
