#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string containing the binary number
 *
 * Return: the reslting number converted to decimal
 */
unsigned int binary_to_uint(const char *b)
{
	int ind;
	unsigned int decimVal = 0;

	if (!b)
		return (0);

	for (ind = 0; b[ind]; ind++)
	{
		if (b[ind] < '0' || b[ind] > '1')
			return (0);
		decimVal = 2 * decimVal + (b[ind] - '0');
	}

	return (decimVal);
}
