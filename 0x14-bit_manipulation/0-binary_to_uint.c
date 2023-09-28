#include "main.h"


/**
 * _strlen - returns the length of a string
 * @s: string.
 * Return: the length of of the string
 */

int _strlen(const char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	return (length);
}

/**
 * binary_to_uint - converts binary to decimal
 * @b: string of binary
 * Return: decimal number or 0 if failed.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int len, i = 0;



	if (b == NULL)
		return (0);
	len = _strlen(b);
	len -= 1;

	while( b[i] != '\0')
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
		i++;
	}

	return (result);
}

