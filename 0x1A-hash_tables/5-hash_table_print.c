#include "hash_tables.h"
/**
 * hash_table_print - print a hash table
 * @ht: Pointer to hash table
 * Return: Not return
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned int i = 0;
	hash_node_t *tmp = NULL;
	char *d = "";

	if (ht == NULL)
		return;
	printf("{");
	while (i < ht->size)
	{
		if (ht->array[i] != NULL)
		{
			tmp = ht->array[i];
			while (tmp != NULL)
			{
				printf("%s\'%s\': \'%s\'", d, tmp->key, tmp->value);
				d = ", ";
				tmp = tmp->next;
			}
		}
		i++;
	}
	printf("}\n");
}
