#include "hash_tables.h"
#include <stdio.h>
/**
 * hash_table_set - add an element to the hash table
 * @ht: Pointer to hash table
 * @key: key of value
 * @value: value associated with the key
 * Return: 1 if it succeeded or 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new;
	unsigned int index;

	if (ht == NULL || key == NULL || value == NULL || key[0] == '0')
		return (0);

	index = key_index((unsigned char *)key, size);

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);
	new->key = (char *)key;
	new->value = (char *)value;

	
}
