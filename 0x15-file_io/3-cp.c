#include <stdio.h>
#include <stdlib.h>

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
		printf("Usage: cp file_from file_to\n");
		exit(EXIT_FAILURE);
	}

	fp1 = fopen(argv[1], "r");
	if (f1 == NULL)
	{
		printf("Error: Can't read from file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	fp2 = fopen(argv[2], "w");
	if (fp2 == NULL)
	{
		printf("Error: Can't write to %s\n", argv[2]);
		exit(EXIT_FAILURE);
	}

	while (fgets(ch, 1024, fp1) != NULL)
	{
		if (fputs(ch, fp2) == EOF)
		{
			printf("Error: Can't write to %s\n", argv[2]);
			exit(EXIT_FAILURE);
		}
	}

	fclose(fp1);
	fclose(fp2);

	return (0);
}
