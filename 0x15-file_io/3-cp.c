#include "main.h"
#define MAXSIZE 1204
#define SE STDERR_FILENO

/**
 * main - A program the copies the content of a file to another file
 * @ac: Argument count
 * @av: Arguments as strings
 *
 * Return: 0
 */
int main(int ac, char *av[])
{
	int fdInput, fdOutput, old, new;
	char temp[MAXSIZE];
	mode_t mode;

	mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	if (ac != 3)
		dprintf(SE, "Usage: cp file_from file_to\n"), exit(97);
	fdInput = open(av[1], O_RDONLY);
	if (fdInput == -1)
		dprintf(SE, "Error: Can't read from file %s\n", av[1]), exit(98);
	fdOutput = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, mode);
	if (fdOutput == -1)
		dprintf(SE, "Error: Can't write to %s\n", av[2]), exit(99);
	do {
		old = read(fdInput, temp, MAXSIZE);
		if (old == -1)
		{
			dprintf(SE, "Error: Can't read from file %s\n", av[1]);
			exit(98);
		}
		if (old > 0)
		{
			new = write(fdOutput, temp, (ssize_t) old);
			if (new == -1)
			{
				dprintf(SE, "Error: Can't write to %s\n", av[2]);
				exit(99);
			}
		}
	} while (old > 0);
	old = close(fdInput);
	if (old == -1)
		dprintf(SE, "Error: Can't close fd %d\n", fdInput), exit(100);
	new = close(fdOutput);
	if (new == -1)
		dprintf(SE, "Error: Can't close fd %d\n", fdOutput), exit(100);
	return (0);
}
