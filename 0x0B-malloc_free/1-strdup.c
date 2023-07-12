#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space
 * in memory, which contains a copy of
 * the string given as a parameter.
 * @str: string to be duplicated.
 * Return: a pointer to a new string which is a duplicate
 * of the string str.
 */

char *_strdup(char *str)
{
	char *new_str;
	unsigned int i = 0, j = 0;

	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
		i++;
	new_str = malloc((i + 1) * sizeof(*new_str));
	if (new_str)
	{
		for (; j < i; j++)
		{
			*(new_str + j) = str[j];
		}
		return (new_str);
		free(new_str);
	}
	else
		return (NULL);
}
