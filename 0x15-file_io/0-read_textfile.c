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

	ssize_t w;

	int fd;

	char *buffer = malloc(letters);

	if (buffer == NULL)
		return (0);

	if (!filename)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	bytes_read = read(fd, buffer, letterers);
	w = write(STDOUT_FILENO, buffer, bytes_read);
	if (w == -1 || bytes_read == -1 || fd == -1 || w != bytes_read)
	{
		close(fd);
		free(buffer);
		return (0);
	}
	free(buffer);
	close(fd);
	return (bytes_read);
}
