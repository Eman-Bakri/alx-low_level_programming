#include "hash_tables.h"

/**
 * key_index - Return the index in which key-value
 *      pair should be stored.
 * @key: The key to get the index of.
 * @size: array size.
 *
 * Return: The index of the key.
 * Description: Uses the djb2 algorithm.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
