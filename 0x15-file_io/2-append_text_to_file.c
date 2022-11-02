#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 *
 * @filename: name of file
 * @text_content: text to be added
 *
 * Return: returns 1 if success or -1 on failure or filename
 * is NULL, file does not exist or if permission is not
 * allowed
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i, status;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		return (1);

	fd = open(filename, O_APPEND | O_WRONLY);
	if (fd == -1)
		return (-1);

	for (i = 0; text_content[i] != '\0'; i++)
		;
	status = write(fd, text_content, i);

	if (status == -1)
		return (-1);

	close(fd);

	return (1);
}
