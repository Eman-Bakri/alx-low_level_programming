#include "main.h"
/**
 * print_alphabet_x10 - Shows the alphabet 10 times
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	int a, b;

	for (a = 1; a < 11; a++)
	{
		for (b = 97; b < 123; b++)
		{
			_putchar(b);
		}
		_putchar('\n');
	}
}
