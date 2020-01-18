#include "hash_tables.h"
/**
 * add_node - add node into the hash table
 * @head: Pointer to head of linked list into hash table
 * @key: Key of value
 * @value: Equivalent value of key
 * Return: 0 if it failed or 1 if it succeeded
 */
int add_node(hash_node_t **head, const char *key, const char *value)
{
	hash_node_t *new;

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);
	new->value = strdup(value);
	new->key = strdup(key);

	if (*head == NULL)
		new->next = NULL;
	else
		new->next = (*head);
	*head = new;
	return (1);
}
/**
 * hash_table_set - add an element to the hash table
 * @ht: Pointer to hash table
 * @key: key of value
 * @value: value associated with the key
 * Return: 1 if it succeeded or 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *tmp;
	unsigned int index;

	if (ht == NULL || key == NULL || value == NULL || key[0] == '0')
		return (0);

	index = key_index((unsigned char *)key, ht->size);
	/*In case of no node into array position*/
	if (ht->array[index] == NULL)
	{
		if (add_node(&(ht->array[index]), key, value) == 0)
			return (0);
	}
	else
	{
		tmp = ht->array[index];
		while (tmp != NULL)
		{
			if (strcmp(tmp->key, key) == 0)
				break;
			tmp = tmp->next;
		}
		/*No collision*/
		if (tmp == NULL)
		{
			if (add_node(&(ht->array[index]), key, value) == 0)
				return (0);
		}
		else
		{
			/*Update the value if exists the key*/
			free(tmp->value);
			tmp->value = strdup(value);
		}
	}
	return (1);
}
