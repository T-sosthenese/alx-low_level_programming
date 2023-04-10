#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: The file to be read
 * @letters: The number of letters to be written to stdout
 *
 * Return: Actual number of letters, 0 (file cannot be opened, file is NULL,
 * cannot write any letter to stdout)
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t bytes_read = 0;

	int fd;

	char buffer[letters];

	if (!filename)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	bytes_read = read(fd, buffer, letters);
	if (bytes_read == -1)
	{
		close(fd);
		return (0);
	}
	if (write(STDOUT_FILENO, buffer, bytes_read) == -1)
	{
		close(fd);
		return (0);
	}
	close(fd);
	return (bytes_read);
}
