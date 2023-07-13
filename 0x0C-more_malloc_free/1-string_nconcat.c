#include "main.h"

/**
 * string_nconcat - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 * @n: number of character of @s2 to concatenate.
 * Return: pointer to new string.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0, l = 0, m = 0;
	char *new_string;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	if (n > j)
		n = j;
	new_string = malloc((i + n + 1) * sizeof(char));
	if (new_string == NULL)
		return (0);
	for (; l < i; l++)
		new_string[l] = s1[l];
	for (; m < n; m++)
	{
		new_string[l] = s2[m];
		l++;
	}
	new_string[l] = '\0';
	return (new_string);
}
