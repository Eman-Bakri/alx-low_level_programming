#include "hash_tables.h"

/**
 * hash_table_create - Creating a hash table.
 * @size: The array size.
 *
 * Return: If an error occurs - NULL.
 *         Otherwise - a pointer to the new hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash1;
	unsigned long int i;

	hash1 = malloc(sizeof(hash_table_t));
	if (hash1 == NULL)
		return (NULL);

	hash1->size = size;
	hash1->array = malloc(sizeof(hash_node_t *) * size);
	if (hash1->array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		hash1->array[i] = NULL;

	return (hash1);
}
