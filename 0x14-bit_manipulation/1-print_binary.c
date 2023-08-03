#include "main.h"

/**
 * print_binary - prints the binary version of a dec number
 * @n: the number to be printed in binary
 */
void print_binary(unsigned long int n)
{
	int a, cnt = 0;
	unsigned long int current;

	for (a = 63; a >= 0; a--)
	{
		current = n >> a;

		if (current & 1)
		{
			_putchar('1');
			cnt++;
		}
		else if (cnt)
			_putchar('0');
	}
	if (!cnt)
		_putchar('0');
}
