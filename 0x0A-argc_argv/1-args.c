#include <stdio.h>

/**
 * main - a program that prints the number of arguments passed into it.
 * @argc: the number of command in the program line.
 * @argv: array of commands in a line.
 * Return: 0 always on success.
 */

int main(int argc, char *argv[])
{
	int count = 0;
	int i;
	(void) argv;

	for (i = 0; i < argc - 1; i++)
	{
		count += 1;
	}

	printf("%d\n", count);

	return (0);
}
