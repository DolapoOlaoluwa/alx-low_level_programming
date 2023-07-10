#include <stdio.h>

/**
 * main - a program that prints a name.
 * @argc: number of command on line.
 * @argv: arrays of command.
 * Return: 0 always.
 */

int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);
	return (0);
}
