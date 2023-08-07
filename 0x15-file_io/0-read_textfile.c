#include "main.h"

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
	int fd;
	ssize_t bytes_read, bytes_written;
	char buffer[letters];

	if (!filename)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}


	bytes_read = read(fd, buffer, letters);
	if (bytes_read == -1)
	{
		close(fd);
		return (0);
	}

	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	if (bytes_written == -1 || bytes_written != bytes_read)
	{
		close(fd);
		return (0);
	}

	close(fd);

	return bytes_written;
}
