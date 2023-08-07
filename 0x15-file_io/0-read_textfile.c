#include "main.h"
#include <stdio.h>
#include <stdlib.h>

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
	FILE *file;
	size_t count = 0;
	char c;

	if (filename == NULL)
		return (0);

	file = fopen(filename, "r");
	if (file == NULL)
		return (0);

	while (count < letters && (c = fgetc(file)) != EOF)
	{
		if (fputc(c, stdout) == EOF)
			return (0);
		count++;
	}

	fclose(file);
	return (count);
}
