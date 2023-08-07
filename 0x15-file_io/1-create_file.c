#include "main.h"

/**
 * create_file - a function to creates a file.
 * @filename: A pointer to the file name creating.
 * @text_content: A pointer to a string be written to the file.
 *
 * Return: When fails -1.
 *         Otherwise  1.
 */
int create_file(const char *filename, char *text_content)
{
	int floc, w, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	floc = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(floc, text_content, length);

	if (floc == -1 || w == -1)
		return (-1);

	close(floc);

	return (1);
}
