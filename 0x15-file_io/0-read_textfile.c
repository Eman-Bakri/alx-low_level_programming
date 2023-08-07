#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read txt file &  print it to standrad output.
 * @filename: the txt file to be read
 * @letters: no. of chars read
 * Return: w- actual no. of bytes get read and printed
 *        0 if function fails or filename not found.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t floc;
	ssize_t w;
	ssize_t t;

	floc = open(filename, O_RDONLY);
	if (floc == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	t = read(floc, buffer, letters);
	w = write(STDOUT_FILENO, buffer, t);

	free(buffer);
	close(floc);
	return (w);
}
