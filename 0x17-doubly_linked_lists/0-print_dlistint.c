#include "lists.h"
/**
 * print_dlistint - print all nodes from a double linked list
 * @h: Reference to the first node of the double linked list
 * Return: Length of linked list
 */
size_t print_dlistint(const dlistint_t *h)
{
	if (h == NULL)
		return (0);
	printf("%d\n", h->n);
	return (1 + print_dlistint(h->next));
}
