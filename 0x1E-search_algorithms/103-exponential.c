#include "search_algos.h"
/**
 * _binarys - function for Binary search algorithm
 *
 * @array: Array is a pointer to array first element
 * @min: minimum index in the array left
 * @max: maximum index in the array right
 * @value: Value to search
 *
 * Return: The first index where value is located
 * or -1 otherwise
 */
int _binarys(int *array, size_t min, size_t max, int value)
{
	size_t left = min;
	size_t right = max - 1;
	size_t mid = 0;
	size_t a = 0;

	if (array != NULL)
	{
		while (left <= right)
		{
			mid = (left + right) / 2;
			printf("Searching in array: ");
			for (a = left; a < right; a++)
			{
				printf("%d, ", array[a]);
			}
			printf("%d\n", array[a]);
			if (array[mid] < value)
			{
				left = mid + 1;
			}
			else if (array[mid] > value)
			{
				right = mid - 1;
			}
			else
			{
				return (mid);
			}
		}
	}
	return (-1);
}
/**
 * exponential_search - Function that searches for a value in a sorted array
 * of integers using the Exponential search algorithm
 *
 * @array: Array is a pointer to array first element
 * @size: Number of array elements
 * @value: Value to search
 *
 * Return: The first index where value is located
 * or -1 otherwise
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t mark = 1;
	size_t min = 0;;
	int outp;

	if (array != NULL)
	{
		while (mark < size && array[mark] < value)
		{
			printf("Value checked array[%lu] = [%d]\n", mark, array[mark]);
			mark *= 2;
		}
		if (mark + 1 < size)
			min = mark + 1;
		else
			min = size;
		printf("Value found between indexes [%lu] and [%lu]\n", mark / 2, min - 1);
		outp = _binarys(array, mark / 2,  min, value);
		if (outp != -1)
			return (outp);
	}
	return (-1);
}
