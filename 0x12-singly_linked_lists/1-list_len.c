#include "lists.h"
/**
 * list_len - return the length of a linked list
 * @h: Address of linked list
 * Return: Length of linked list
 */
size_t list_len(const list_t *h)
{
	if (h != NULL)
		return (1 + list_len(h->next));
	return (0);
}
