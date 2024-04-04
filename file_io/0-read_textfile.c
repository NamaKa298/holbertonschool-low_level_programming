#include "main.h"
/**
 * read_textfile - Reads a text file and prints it to the POSIX standard output
 * @filename: Pointer to the name of the file to read
 * @letters: Number of letters to read and print
 *
 * Return: Upon success, returns the actual number of letters read and printed.
 * On error, returns 0 if `filename` is NULL, if the file cannot be opened or
 * read, or if `letters` is 0 or fewer, and returns -1 if writing or
 * printing fails.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t n, n1;
	char *buffer;

	if (filename == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	buffer = malloc(letters + 1);
	if (buffer == NULL)
	{
		return (0);
	}
	n = read(fd, buffer, letters);
	n1 = write(STDOUT_FILENO, buffer, n);
	close(fd);
	return (n1);
}
