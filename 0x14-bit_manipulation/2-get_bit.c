#include "main.h"

/**
 * get_bit - get the bit at a given index
 * @n: decimal number
 * @index: index
 * Return: the value of bit, or -1 if failed.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	return ((n >> index) & 1);
}

