#include "search_algos.h"

/**
 * binary_search - Binary search algorithm
 *
 * @array: Array is a pointer to the array first element
 * @size: Number of array elements
 * @value: Value to search
 *
 * Return: The first index where value is located
 * or -1 otherwise
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0;
	size_t right = size - 1;
	size_t middle = 0;
	size_t a = 0;

	if (array != NULL)
	{
		while (left <= right)
		{
			middle = (left + right) / 2;
			printf("Searching in array: ");
			for (a = left; a < right; a++)
			{
				printf("%d, ", array[a]);
			}
			printf("%d\n", array[a]);
			if (array[middle] < value)
			{
				left = middle + 1;
			}
			else if (array[middle] > value)
			{
				right = middle - 1;
			}
			else
			{
				return (middle);
			}
		}
	}
	return (-1);
}
