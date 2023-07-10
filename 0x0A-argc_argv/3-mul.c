#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers..
 * @argc: the number of command in the program line.
 * @argv: array of commands in a line.
 * Return: 0 always on success 1 on error.
 */

int main(int argc, char *argv[])
{
	int mul;

	if (argc == 3)
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
		return (0);
	}

	printf("Error\n");
	return (1);
}
