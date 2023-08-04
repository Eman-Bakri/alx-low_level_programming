#include "main.h"

/**
 * flip_bits - how many bits changed
 * @n: first number
 * @m: second number
 *
 * Return: the no. of bits flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int ind, cnt = 0;
	unsigned long int current;
	unsigned long int x = n ^ m;

	for (ind = 63; ind >= 0; ind--)
	{
		current = x >> ind;
		if (current & 1)
			cnt++;
	}

	return (cnt);
}
