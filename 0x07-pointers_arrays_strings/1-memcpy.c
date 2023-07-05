#include "main.h"

/**
 * _memcpy - a function that copies memory area.
 * @dest: memory address to copy to.
 * @src: copy from this address
 * @n: number of bytes to copy.
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
