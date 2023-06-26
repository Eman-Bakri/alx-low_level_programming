#include "main.h"
/**
 * puts2 - function that print only one character out of two
 * starting with the first one
 * @str: input string
 * Return: print
 */
void puts2(char *str)
{
	int length = 0;
	int t = 0;
	char *y = str;
	int a;

	while (*y != '\0')
	{
		y++;
		length++;
	}
	t = length - 1;
	for (a = 0 ; a <= t ; a++)
	{
		if (a % 2 == 0)
	{
		_putchar(str[a]);
	}
	}
	_putchar('\n');
}
