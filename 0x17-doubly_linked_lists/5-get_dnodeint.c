#include "lists.h"

/**
 * get_dnodeint_at_index - a function to return the nth node in a dlistint_t linked list.
 * @head: pointer to head node
 * @index: node index we're searching for, starting from 0
 * Return: nth node or null
 **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head)
	{
		if (i == index)
			return (head);
		head = head->next;
		i++;
	}
	return (NULL);
}
