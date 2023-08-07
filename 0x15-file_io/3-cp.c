#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define BUFF_SIZE 1024

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
	int file_from, file_to, read_state = 1, write_state;
	mode_t permissions = S_IRUSR | S_IWUSR | S_IWGRP | S_IRGRP | S_IROTH;
	char ch[BUFF_SIZE];

	if (argc != 3)
		dprintf(2, "Usage: cp file_from file_to\n"), exit(97);
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
		dprintf(2, "Error: Can't read from file %s\n", argv[1]), exit(98);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, permissions);
	if (file_to == -1)
		dprintf(2, "Error: Can't write to %s\n", argv[2]), exit(99);
	while (read_state)
	{
		read_state = read(file_from, ch, BUFF_SIZE);
		if (read_state == -1)
			dprintf(2, "Error: Can't read from file %s\n", argv[1]), exit(98);
		if (read_state > 0)
		{
			write_state = write(file_to, ch, read_state);
			if (write_state == -1 || write_state != read_state)
				dprintf(2, "Error: Can't write to %s\n", argv[2]), exit(99);
		}
	}
	if (close(file_from) == -1)
		dprintf(2, "Error: Can't close fd %d\n", file_from), exit(100);
	if (close(file_to) == -1)
		dprintf(2, "Error: Can't close fd %d\n", file_to), exit(100);
	return (0);
}
