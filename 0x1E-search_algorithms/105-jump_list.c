#include "search_algos.h"

/**
 * jump_list - implementing Jump search algorithm.
 *
 * @list: Pointer to linked list head.
 * @size: Num of nodes in the linked list
 * @value: The value to search.
 *
 * Return: Pointer to first node where value is located or
 * otherwise NULL
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	listint_t *min =  NULL, *max = NULL;
	size_t limit = 0;

	if (list != NULL)
	{
		min = list;
		max = list;
		while (max->next != NULL && max->index < size && max->n < value)
		{
			min = max;
			limit += sqrt(size);
			while (max->index < limit && max->next != NULL)
				max = max->next;
			printf("Value checked at index [%lu] = [%d]\n", max->index, max->n);
		}
		printf("Value found between indexes [%lu] and [%lu]\n",
		       min->index, max->index);
		while (min != NULL && min->index < size && min->index <= max->index)
		{
			printf("Value checked at index [%lu] = [%d]\n", min->index, min->n);
			if (min->n == value)
				return (min);
			min = min->next;
		}
	}
	return (NULL);

}
