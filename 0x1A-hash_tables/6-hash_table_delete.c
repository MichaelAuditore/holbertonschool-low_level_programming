#include "hash_tables.h"
/**
 * hash_table_delete - deletes a hash table
 * @ht: Pointer refers to hash table
 * Return: Not return
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned int index = 0;
	hash_node_t *tmp, *current;

	if (ht == NULL)
		return;

	while (index < ht->size)
	{
		if (ht->array[index] != NULL)
		{
			tmp = ht->array[index];
			while (tmp != NULL)
			{
				current = tmp;
				tmp = tmp->next;
				free(current->key);
				free(current->value);
				free(current);
			}
		}
		index++;
	}
	free(ht->array);
	free(ht);
}
