#include "main.h"

/**
 * append_text_to_file - a function to appends text at the file end.
 * @filename: A pointer to the file name.
 * @text_content: The string to be added to the file end.
 *
 * Return: When fails or filename is NULL  -1.
 *         When the file does not exist or no required permissions -1.
 *         Otherwise  1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int op, w, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	op = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, length);

	if (op == -1 || w == -1)
		return (-1);

	close(op);

	return (1);
}
