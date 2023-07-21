#include "function_pointers.h"

/**
 * int_index - searches for an integer.
 * @array: Array to itrate through.
 * @size: size of @array
 * @cmp: pointer to the function to be
 * used to compare values.
 * Return: index of the first element for which
 * the cmp function does not return 0.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (!array || !cmp || size <= 0)
		return (-1);
	while (i < size)
	{
		if (cmp(array[i]))
			return (i);
		i++;
	}
	return (-1);
}
