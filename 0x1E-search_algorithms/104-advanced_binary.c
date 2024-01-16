#include "search_algos.h"
int advanced_binary(int *array, size_t size, int value);
int _binary_sr(int *array, size_t l, size_t r, int value);
void _arrayprint(int *array, size_t l, size_t r);

/**
 * advanced_binary - Searches a value in a sorted array using a binary search.
 * @array: The array to search in.
 * @size: The array size.
 * @value: The value search for.
 *
 * Return: The first index of the array value, otherwise -1.
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (!array || !size)
		return (-1);
	else if ((size == 1) && (*array == value))
		return (0);
	return (_binary_sr(array, 0, size - 1, value));
}

/**
 * _binary_sr - implementing binary search recursively .
 * @array: The array.
 * @l: The left index of the array.
 * @r: The right index of the array.
 * @value: The value to search for.
 *
 * Return: The first index of the value in the array, otherwise -1.
 */
int _binary_sr(int *array, size_t l, size_t r, int value)
{
	size_t m;

	if (!array)
		return (-1);
	_arrayprint(array, l, r);
	m = l + ((r - l) / 2);
	if (l == r)
		return (*(array + m) == value ? (int)m : -1);
	if (value < *(array + m))
	{
		return (_binary_sr(array, l, m, value));
	}
	else if (value == *(array + m))
	{
		if ((m > 0) && (*(array + m - 1) == value))
		{
			return (_binary_sr(array, l, m, value));
		}
		return ((int)m);
	}
	else
	{
		return (_binary_sr(array, m + 1, r, value));
	}
}

/**
 * _arrayprint - shows array contents.
 * @array: The array printed.
 * @l: The array left index.
 * @r: The array right index.
 */
void _arrayprint(int *array, size_t l, size_t r)
{
	size_t a;

	if (array)
	{
		printf("Searching in array: ");
		for (a = l; a < l + (r - l + 1); a++)
			printf("%d%s", *(array + a), a < l + (r - l) ? ", " : "\n");
	}
}

