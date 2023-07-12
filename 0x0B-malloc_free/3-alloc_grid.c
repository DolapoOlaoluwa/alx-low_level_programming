#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: column of the 2D array.
 * @height: row of the 2D array.
 * Return: pointer to a 2 dimensional array of integers.
 */

int **alloc_grid(int width, int height)
{
	int **new_array;
	int i = 0;

	if (width <= 0 || height <= 0)
		return (NULL);
	new_array = calloc(height, sizeof(*new_array));
	if (new_array == NULL)
		return (NULL);
	for (;  i < height; i++)
	{
		new_array[i] = calloc(width, sizeof(**new_array));

		if (new_array[i] == NULL)
		{
			for (i = i - 1; i >= 0; i--)
				free(new_array[i]);
			free(new_array);
			return (NULL);
		}
	}
	return (new_array);
}
