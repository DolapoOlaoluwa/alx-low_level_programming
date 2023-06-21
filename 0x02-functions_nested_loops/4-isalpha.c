#include "main.h"

/**
 * _isalpha - checks if a character is alphabet
 * @c: character to be checked
 * Return: 1 if character is alphabet otherwise 0
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
