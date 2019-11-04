#include "lists.h"
#include <stdio.h>
/**
 * print_listint - print all elements for a list
 * @h: Address of linked list
 * Return: Number of elements
 */
size_t print_listint(const listint_t *h)
{
	if (h != NULL)
	{
		printf("%d\n", h->n);
		return (print_listint(h->next) + 1);
	}
	return (0);
}
