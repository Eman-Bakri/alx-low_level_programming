#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a linked list
 * @head: double pointer to the list_t list
 * @str: string to put in the new node
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNod;
	list_t *temp = *head;
	unsigned int length = 0;

	while (str[length])
		length++;

	newNod = malloc(sizeof(list_t));
	if (!newNod)
		return (NULL);

	newNod->str = strdup(str);
	newNod->len = length;
	newNod->next = NULL;

	if (*head == NULL)
	{
		*head = newNod;
		return (newNod);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = newNod;

	return (newNod);
}
