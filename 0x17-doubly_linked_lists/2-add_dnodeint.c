#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning
 * of a dlistint_t list
 *
 * @head: head of the list
 * @n: element value
 * Return: new element address
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNod;
	dlistint_t *h;

	newNod = malloc(sizeof(dlistint_t));
	if (newNod == NULL)
		return (NULL);

	newNod->n = n;
	newNod->prev = NULL;
	h = *head;

	if (h != NULL)
	{
		while (h->prev != NULL)
			h = h->prev;
	}

	newNod->next = h;

	if (h != NULL)
		h->prev = newNod;

	*head = newNod;

	return (newNod);
}
