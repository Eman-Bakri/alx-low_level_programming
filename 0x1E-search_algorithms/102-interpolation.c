#include "search_algos.h"

/**
 * interpolation_search - function for Interpolation search algorithm.
 *
 * @array: Array is a pointer to the array first element
 * @size: Number of array elements
 * @value: Value to search
 *
 * Return: The first index where value is located
 * or -1 otherwise
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t min = 0;
	size_t max = size - 1;
	size_t ru = 0;

	if (array != NULL)
	{
		while ((array[max] != array[min]) &&
		       (value >= array[min]) &&
		       (value <= array[max]))
		{
			ru = min + (((double)(max - min) / (array[max] - array[min])) *
				     (value - array[min]));
			printf("Value checked array[%lu] = [%d]\n", ru, array[ru]);
			if (array[ru] < value)
				min = ru + 1;
			else if (value < array[ru])
				max = ru - 1;
			else
				return (ru);
		}
		if (value == array[min])
			return (min);
		ru = min + (((double)(max - min) / (array[max] - array[min]))
			     * (value - array[min]));
		printf("Value checked array[%lu] is out of range\n", ru);
	}
	return (-1);
}
