#include "lists.h"

/**
 * free_listint_safe -To free a linked list
 * @h: pointer to the first node in the linked list
 *
 * Return: number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t length = 0;
	int di;
	listint_t *temp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		di = *h - (*h)->next;
		if (di > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			length++;
		}
		else
		{
			free(*h);
			*h = NULL;
			length++;
			break;
		}
	}

	*h = NULL;

	return (length);
}
