#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a linked list
 * @head: double pointer to the list_t list
 * @str: new string to add in the node
 *
 * Return: the address of the new element, or NULL if not found
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNod;
	unsigned int length = 0;

	while (str[length])
		length++;

	newNod = malloc(sizeof(list_t));
	if (!newNod)
		return (NULL);

	newNod->str = strdup(str);
	newNod->len = length;
	newNod->next = (*head);
	(*head) = newNod;

	return (*head);
}
