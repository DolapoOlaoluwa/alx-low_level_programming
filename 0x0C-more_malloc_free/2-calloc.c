#include "main.h"

/**
 * copychar- copy character into an array.
 * @s1: array to copy to.
 * @c: char to copy.
 * @n: size of @s1.
 * Return: pointer to s1.
 */
char *copychar(char *s1, char c, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s1[i] = c;
		i++;
	}
	return (s1);
}

/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb: number of element in the array.
 * @size: size of element in the array.
 * Return: Nothing.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *pointer;

	if (nmemb == 0 || size == 0)
		return (NULL);
	pointer = malloc(nmemb * size);
	if (pointer == NULL)
		return (NULL);
	copychar(pointer, 0, nmemb * size);
	return (pointer);
}
