#include "main.h"

/**
 * _strchr - a function that locates a character in a string.
 * @s: check through this string.
 * @c: check for this character.
 * Return: pointer to first occurence of @c. or null
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}

	if (c == '\0')
		return (s);


	return (NULL);
}
