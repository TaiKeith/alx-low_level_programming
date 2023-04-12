#include "main.h"

/**
 * read_textfile - A function that reads a text file and prints it to the POSIX
 * standard output
 * @filename: A char string of the name of the file
 * @letters: Number of letters to read and print
 *
 * Return: The actual number of letters it could read and print else 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t rc, wc;
	char *temp;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDWR);
	if (fd == -1)
		return (0);

	temp = malloc(sizeof(char) * letters);
	if (temp == NULL)
	{
		free(temp);
		return (0);
	}
	rc = read(fd, temp, letters);
	if (rc == -1)
		return (0);

	wc = write(STDOUT_FILENO, temp, rc);
	if (wc == -1 || rc != wc)
		return (0);
	free(temp);

	close(fd);
	return (wc);
}
