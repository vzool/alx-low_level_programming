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
	FILE *fp1, *fp2;
	char ch[1024];

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fp1 = fopen(argv[1], "r");
	if (fp1 == NULL)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	fp2 = fopen(argv[2], "w");
	if (fp2 == NULL)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	if (access(argv[2], F_OK) == 0)
	{
		if (truncate(argv[2], 0) == -1)
			return (-1);
	}
	else
	{
		if (chmod(argv[2], 00664) == -1)
			return (-1);
	}

	while (fgets(ch, 1024, fp1) != NULL)
	{
		if (fputs(ch, fp2) == EOF)
		{
			dprintf(2, "Error: Can't write to %s\n", argv[2]);
			exit(EXIT_FAILURE);
		}
	}

	if (fclose(fp1) == EOF)
	{
		dprintf(2, "Error: Can't close fd\n");
		exit(100);
	}
	if (fclose(fp2) == EOF)
	{
		dprintf(2, "Error: Can't close fd\n");
		exit(100);
	}

	return (0);
}
