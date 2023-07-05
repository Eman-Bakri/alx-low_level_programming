#include "main.h"

int act_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to calculate the square root of
 *
 * Return: the resulting square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (act_sqrt_recursion(n, 0));
}

/**
 * act_sqrt_recursion - recurses to find the natural
 * square root of a number
 * @n: number to calculate the sqaure root of
 * @a: square value
 *
 * Return: the resulting square root
 */
int act_sqrt_recursion(int n, int a)
{
	if (a * a > n)
		return (-1);
	if (a * a == n)
		return (a);
	return (act_sqrt_recursion(n, a + 1));
}
