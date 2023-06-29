#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers.
 * @a: the array.
 * @n: number of element in an array.
 * Return: Nothing.
 */

void reverse_array(int *a, int n)
{
	int num;
	int new;

	num = 0;
	n -= 1;
	while (num < n)
	{
		new = a[num];
		a[num++] = a[n];
		a[n--] = new;
	}
}
