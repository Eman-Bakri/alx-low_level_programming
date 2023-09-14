#include "lists.h"

/**
 * get_dnodeint_at_index - a function to return the nth node in a dlistint_t linked list.
 * @head: pointer to head node
 * @index: node index we're searching for, starting from 0
 * Return: nth node or null
 **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int length;
	dlistint_t *temp;

	length = 0;
	if (head == NULL)
	return (NULL);

	temp = head;
	while (temp)
	{
	if (index == length)
	return (temp);
	length++;
	temp = temp->next;
	}
	return (NULL);
}
