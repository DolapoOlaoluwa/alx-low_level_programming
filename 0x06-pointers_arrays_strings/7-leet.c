#include "main.h"

/**
 * leet- a function that encodes a string into 1337.
 * @str: the string we want to encode.
 * Return: Encodded string.
 */
char *leet(char *str)
{
	int i, j;
	char *letters, *codes;

	letters = "aAeEoOtTlL";
	codes = "4433007711";

	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (j <= 9)
		{
			if (letters[j] == str[i])
			{
				str[i] = codes[j];
			}

			j++;
		}

		i++;
	}
	return (str);
}
