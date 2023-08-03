#include "main.h"

/**
 * set_bit - changes a bit at a specific index to 1
 * @n: a pointer to the number to set
 * @index: the index in which the bit set to 1
 *
 * Return: 1 for success, -1 for failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
