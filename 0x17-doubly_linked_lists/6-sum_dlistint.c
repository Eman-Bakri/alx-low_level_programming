#include "lists.h"

/**
 * sum_dlistint - a function to return the total sum of all the (n) values
 * of a doubly linked list
 *
 * @head: head node
 * Return: total sum of the data
 */
int sum_dlistint(dlistint_t *head)
{
	int total_sum;

	total_sum = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;

		while (head != NULL)
		{
			total_sum += head->n;
			head = head->next;
		}
	}

	return (total_sum);
}
