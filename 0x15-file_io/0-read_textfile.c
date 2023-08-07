#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it
 *
 * @filename: name of the file
 * @letters: number of letters it should read and print
 *
 * Return: if the file can not be opened or read return 0
 * if filename is NULL return 0, if writer fails return 0
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

	if (op == -1 || rd == -1 || wr == -1 || wr != rd)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(op);

	return (wr);
}
