#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int floc);

/**
 * create_buffer - save 1024 bytes for a buffer.
 * @file: The name of the file buff to store chars in.
 *
 * Return: A pointer to the buffer created newly.
 */
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}

/**
 * close_file - Closes file descriptors.
 * @floc: The file descriptor to be closed.
 */
void close_file(int floc)
{
	int cls;

	cls = close(floc);

	if (cls == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", floc);
		exit(100);
	}
}

/**
 * main - Copies cont from a file to another.
 * @argc: The no. of argus given to the program.
 * @argv: A pointers arra to the argus.
 *
 * Return: 0 on success.
 *
 * Description: When the argu count is incorrect - exit code 97.
 * When file_from does not exist or cannot be read - exit code 98.
 * When file_to unable to created or written to - exit code 99.
 * When file_to or file_from unable to be closed - exit code 100.
 */
int main(int argc, char *argv[])
{
	int from, to, rd, w;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	rd = read(from, buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || rd == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		w = write(to, buffer, rd);
		if (to == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		rd = read(from, buffer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (rd > 0);

	free(buffer);
	close_file(from);
	close_file(to);

	return (0);
}
