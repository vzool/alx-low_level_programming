#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>

/**
 * main - copy a file
 *
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 on success, 1 on failure
 */
int main(int argc, char *argv[])
{
	FILE *file_from, *file_to;
	char ch[1024];

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_to = fopen(argv[2], "w");
	if (file_to == NULL)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	if (access(argv[2], F_OK) == 0)
	{
		truncate(argv[2], 0);
	}
	else
	{
		if (chmod(argv[2], 00664) == -1)
			return (-1);
	}

	file_from = fopen(argv[1], "r");
	if (file_from == NULL)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	while (fgets(ch, 1024, file_from) != NULL)
	{
		if (fputs(ch, file_to) == EOF)
		{
			dprintf(2, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}

	if (fclose(file_from) == EOF)
	{
		dprintf(2, "Error: Can't close fd\n");
		exit(100);
	}
	if (fclose(file_to) == EOF)
	{
		dprintf(2, "Error: Can't close fd\n");
		exit(100);
	}

	return (0);
}
