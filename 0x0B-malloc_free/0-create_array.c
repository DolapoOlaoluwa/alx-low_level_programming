#include "main.h"

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char.
 * @size: size of the array.
 * @c: character to initialize the array with.
 * Return: pointer to the array, or NULL if it fails.
 */

char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);
	p = malloc(size * sizeof(*p));

	if (p)
	{
		for (; i < size; i++)
		{
			*(p + i) = c;
		}
		*(p + i) = '\0';

		return (p);
		free(p);
	}
	else
		return (NULL);
}
