#include "main.h"

/**
 * get_endianness - checks whether a machine considered a little or big endian
 * Return: 0 for big, 1 for little
 */
int get_endianness(void)
{
	unsigned int a = 1;
	char *ch = (char *) &a;

	return (*ch);
}
