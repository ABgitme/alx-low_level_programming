#include "main.h"

/**
 * read_textfile - A function that reads a text file and prints
 * to the POSIX STDOUT
 * @filename: The filename to open
 * @letters: The number of letters to read and print
 * Return: The number of letters read and printed, or 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fileinput, n;
	char *buffer;
	int flags = O_RDONLY;

	if (filename == NULL)
		return (0);
	fileinput = open(filename, flags);
	if (fileinput == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	n = read(fileinput, buffer, letters);
	if (n == -1)
	{
		/* An error occurred*/
		close(fileinput);
		free(buffer);
		return (0);
	}
	write(STDOUT_FILENO, buffer, n);
	free(buffer);
	close(fileinput);
	return (n);
}
