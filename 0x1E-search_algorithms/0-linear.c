#include "search_algos.h"

/**
 * linear_search - linear search a value
 * @array: Array is a pointer to the array first element
 * @size: Number of array elements
 * @value: Value to search
 *
 * Return: The first index where value is located
 * or -1 if value is not found or if array is NULL
 */
int linear_search(int *array, size_t size, int value)
{
	size_t a = 0;

	if (array != NULL)
	{
		for (a = 0; (a < size) && (array); a++)
		{
			printf("Value checked array[%lu] = [%d]\n", a, array[a]);
			if (array[a] == value)
			{
				return (a);
			}
		}
	}
	return (-1);
}
