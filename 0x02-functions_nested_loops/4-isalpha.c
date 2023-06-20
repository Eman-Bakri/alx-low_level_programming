#include "main.h"
/**
* _isalpha - Shows 1 if input is letter
*
* @c: The character in ASCII
*
* Return: 1 for letters
*/

int _isalpha(int c)
{
	if ((c > 98 && c < 123) || (c > 64 && c < 91))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
