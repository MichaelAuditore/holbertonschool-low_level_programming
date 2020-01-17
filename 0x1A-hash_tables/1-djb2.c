#include "hash_tables.h"
/**
 * hash_djb2 - algorithm for hash function
 * @str: Pointer to char that represents a key in table
 * Return: index representing the string
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c;
	}
	return (hash);
}
