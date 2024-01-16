#include "search_algos.h"

/**
 * jump_search - funcion for Jump search algorithm
 *
 * @array: Array is a pointer to the array first element
 * @size: Number of array elements
 * @value: Value to search
 *
 * Return: The first index where value is located
 * or -1 otherwise
 */
int jump_search(int *array, size_t size, int value)
{
	size_t min = 0;
	size_t max = 0;
	size_t a = 0;

	if (array != NULL)
	{
		while (max < size && array[max] < value)
		{
			min = max;
			max = max + sqrt(size);
			printf("Value checked array[%lu] = [%d]\n",
			       min, array[min]);
		}
		printf("Value found between indexes [%lu] and [%lu]\n",
		       min, max);
		for (a = min; a <= max; a++)
		{
			if (a < size)
			{
				printf("Value checked array[%lu] = [%d]\n",
				       a, array[a]);
				if (array[a] == value)
					return (a);
			}
		}
	}
	return (-1);
}
