#include "main.h"

/**
 * append_text_to_file - A function that appends text at the end of a file
 * @filename: The name of the file
 * @text_content: The NULL terminated string to add at the end of the file
 *
 * Return: 1 on success or -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, temp, incr;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (1);

	fd = open(filename, O_APPEND | O_WRONLY);
	if (fd == -1)
		return (-1);

	for (incr = 0; text_content[incr] != '\0'; incr++)
		;
	temp = write(fd, text_content, incr);
	if (temp == -1)
		return (-1);
	close(fd);
	return (1);
}
