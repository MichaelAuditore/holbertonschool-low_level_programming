#include "lists.h"
/**
 * dlistint_len - gets the length of a doubly linked list
 * @h: reference to the first node of the linked list
 * Return: length of linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	if (h == NULL)
		return (0);
	return (1 + dlistint_len(h->next != NULL ? h->next : NULL));
}
