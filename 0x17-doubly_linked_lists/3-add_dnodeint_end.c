#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end
 * of a dlistint_t list
 *
 * @head: head of the list
 * @n: element value
 * Return:  new element address
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *h;
	dlistint_t *newNod;

	newNod = malloc(sizeof(dlistint_t));
	if (newNod == NULL)
		return (NULL);

	newNod->n = n;
	newNod->next = NULL;

	h = *head;

	if (h != NULL)
	{
		while (h->next != NULL)
			h = h->next;
		h->next = newNod;
	}
	else
	{
		*head = newNod;
	}

	newNod->prev = h;

	return (newNod);
}
