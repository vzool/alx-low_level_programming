#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>

/**
 * create_file - creates a file and fills it with text
 *
 * @filename: name of the file to create
 * @text_content: NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	FILE *file;

	if (filename == NULL || text_content == NULL)
		return (-1);

	file = fopen(filename, "w");
	if (file == NULL)
		return (-1);

	if (chmod(filename, 0600) == -1)
		return (-1);

	if (access(filename, F_OK) == 0)
	{
		if (truncate(filename, 0) == -1)
			return (-1);
	}

	if (fputs(text_content, file) == EOF)
		return (-1);
	fclose(file);
	return (1);
}
