#include "main.h"

/**
 * create_file - creates a file
 *
 * @filename: name of the file
 * @text_content: content to be written to be file
 *
 * Return: if success return 1 else -1 on failure or
 * filename is NULL
 */
int create_file(const char *filename, char *text_content)
{
	int fd, rstatus, i;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (i = 0; text_content[i] != '\0'; i++)
			;
		rstatus = write(fd, text_content, i);
		if (rstatus == -1)
			return (-1);
	}

	close(fd);

	return (1);
}
