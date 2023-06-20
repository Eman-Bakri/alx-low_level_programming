#include "main.h"
/**
* _islower - Shows 1 if input is lowercase
*
*
* @c: The character in ASCII code
*
* Return: 1 for lowercase character
*/

int _islower(int c)
{
	if (c > 96 && c < 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
