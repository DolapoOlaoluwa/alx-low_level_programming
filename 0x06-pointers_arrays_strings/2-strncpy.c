#include "main.h"

/**
 * _strncpy - copies a string.
 * @dest: destination.
 * @src: string to be copied.
 * @n: number of byte of @src to copy.
 * Return: pointer to the copied string.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j = 0;

	while (src[j] != '\0' && j < n)
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}
