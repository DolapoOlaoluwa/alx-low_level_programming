#include <stdio.h>

/**
 * main - prints sum of multiple of 5 and 3
 * Return: 0 always on succes
 */

int main(void)
{
	int result = 0;
	int n = 0;

	for (; n < 1024; n++)
	{
		if (n % 3 == 0 || n % 5 == 0)
		{
			result += n;
		}
	}
	printf("%d\n", result);
	return (0);
}
