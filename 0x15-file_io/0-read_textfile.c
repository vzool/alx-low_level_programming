#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 *
 * @filename: name of the file to read
 * @letters: number of letters it should read and print
 *
 * Return: actual number of letters it could read and print, 0 if:
 * - the file can not be opened or read,
 * - filename is NULL,
 * - write fails or does not write the expected amount of bytes
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file, read_state = 1, write_state;
	size_t count = 0;
	char c;

	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);

	while (count <= letters && read_state != 0)
	{
		read_state = read(file, &c, 1);
		if (read_state == -1)
			return (0);
		if (read_state == 0)
			break;
		write_state = write(STDOUT_FILENO, &c, 1);
		if (write_state == -1)
			return (0);
		count++;
	}

	close(file);
	return (count);
}
