#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to the standard
 * output
 *
 * @filename: name of the file to be read
 * @letters: number of leeters it should read and print
 *
 * Return: returns the actual numbers it could read and print
 * returns 0 if filename is NULL or write fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t op, rd, wr;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
		return (0);

	op = open(filename, O_RDONLY);
	rd = read(op, buffer, letters);
	wr = write(STDOUT_FILENO, buffer, rd);

	if (op == -1 || wr == -1 || rd == -1 || wr != rd)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(op);

	return (wr);
}
