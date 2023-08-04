#include "main.h"

/**
 * flip_bits -how many bits is needed to flip from one number to another
 * @n: origin number
 * @m: destination number
 * Return: the number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m;
	int times = 0;

	while (xor)
	{
		times += xor & 1;
		xor >>= 1;
	}
	return (times);
}
