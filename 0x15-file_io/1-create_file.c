#include "main.h"

/**
 * create_file - A function that creates a file
 * @filename: The name of the file to create
 * @text_content: A NULL terminated string to write to the file
 *
 * Return: 1 on success or -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, temp, incr;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (incr = 0; text_content[incr] != '\0'; incr++)
			;
		temp = write(fd, text_content, incr);
		if (temp == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
