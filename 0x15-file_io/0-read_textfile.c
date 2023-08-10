#include "main.h"

/**
 * read_textfile - reads the contents of a text file and prints it to the
 * POSIX standard output.
 * @filename: name of file
 * @letters: maximum number of characters to read and print
 * Return: number of bytes of characters successfully read and printed
 */


ssize_t read_textfile(const char *filename, size_t letters)
{
	long int fd, read_bytes, written_bytes;
	char *buffer;

	buffer = malloc(sizeof(char) * letters);
	if (!buffer || !filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd < 0)
	{
		close(fd);
		free(buffer);
		return (0);
	}

	read_bytes = read(fd, buffer, letters);
	if (read_bytes < 0)
	{
		close(fd);
		free(buffer);
		return (0);
	}

	written_bytes = write(STDOUT_FILENO, buffer, read_bytes);
	if (written_bytes < read_bytes)
	{
		close(fd);
		free(buffer);
		return (0);
	}
	close(fd);
	free(buffer);
	return (written_bytes);
}
