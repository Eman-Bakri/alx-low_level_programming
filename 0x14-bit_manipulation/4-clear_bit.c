#include "main.h"

/**
 * clear_bit - changes the value of a specific bit to 0
 * @n: a pointer to the number to set
 * @index: the index in which the bit cleared
 *
 * Return: 1 for success, -1 for failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
