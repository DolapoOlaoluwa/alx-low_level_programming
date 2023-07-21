#include "function_pointers.h"

/**
 * array_iterator - executes a function given as
 * a parameter on each element of an array.
 * @array: array to work on.
 * @size: size of the array
 * @action: a pointer to the executing funtion.
 * Returnnn: Nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (!array || !action)
		return;
	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
