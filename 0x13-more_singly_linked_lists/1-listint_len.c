#include "lists.h"
/**
 * listint_len - print length of elements for a list
 * @h: Address of linked list
 * Return: Number of elements
 */
size_t listint_len(const listint_t *h)
{
	if (h != NULL)
		return (listint_len(h->next) + 1);
	return (0);
}
