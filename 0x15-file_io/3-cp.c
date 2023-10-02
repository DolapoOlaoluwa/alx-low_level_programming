#include "main.h"

/**
 * main - copies the content of one file to another file
 * @argc: number of argument argument
 * @argv: argument vector
 * Return: 0 if success
 */

int main(int argc, char **argv)
{
	char buffer[BUF_SIZE];
	int fd1, fd2, byts;

	if (argc != 3)
		dprintf(STDERR_FILENO, USAGE), exit(97);
	fd1 = open(argv[1], O_RDONLY);
	if (fd1 == -1)
		dprintf(STDERR_FILENO, ERR_READ, argv[1]), exit(98);

	fd2 = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (fd2 == -1)
		dprintf(STDERR_FILENO, ERR_WRITE, argv[2]), exit(99);

	while ((byts = read(fd1, buffer, BUF_SIZE)) > 0)
		if (write(fd2, buffer, byts) != byts)
			dprintf(STDERR_FILENO, ERR_WRITE, argv[2]), exit(99);

	if (byts == -1)
		dprintf(STDERR_FILENO, ERR_READ, argv[1]), exit(98);

	fd1 = close(fd1);
	if (fd1)
		dprintf(STDERR_FILENO, ERR_CLOSE, fd1), exit(100);

	fd2 = close(fd2);
	if (fd2)
		dprintf(STDERR_FILENO, ERR_CLOSE, fd2), exit(100);

	return (0);

}
