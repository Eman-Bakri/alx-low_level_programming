#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node in a linked list,
 * at a given position
 * @head: pointer to the first node in the list
 * @idx: index where the new node is added
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int a;
	listint_t *newNod;
	listint_t *temp = *head;

	newNod = malloc(sizeof(listint_t));
	if (!newNod || !head)
		return (NULL);

	newNod->n = n;
	newNod->next = NULL;

	if (idx == 0)
	{
		newNod->next = *head;
		*head = newNod;
		return (newNod);
	}

	for (a = 0; temp && a < idx; a++)
	{
		if (a == idx - 1)
		{
			newNod->next = temp->next;
			temp->next = newNod;
			return (newNod);
		}
		else
			temp = temp->next;
	}

	return (NULL);
}
