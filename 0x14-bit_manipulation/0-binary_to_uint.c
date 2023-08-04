#include "main.h"


/**
 * _strlen - returns the length of a string
 * @s: string.
 * Return: the length of of the string
 */

int _strlen(const char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}

/**
 * binary_to_uint - converts binary to decimal
 * @b: string of binary
 * Return: decimal number or 0 if failed.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int len, i;



	if (b == NULL)
		return (0);
	len = _strlen(b);
	len -= 1;

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '0' || b[i] == '1')
		{
			result += ((b[i] - '0') << len);
			len -= 1;
		}
		else
		{
			return (0);
		}
	}

	return (result);
}

