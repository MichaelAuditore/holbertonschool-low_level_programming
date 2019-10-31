#include "lists.h"
/**
 * print_list - this function prints all values for a linked list
 * @h: Address of the linked list to print
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	if (h == NULL)
		return (0);

	if (h != NULL && h->str != NULL)
	{
		printf("[%d] %s\n", h->len, h->str);
		return (1 + print_list(h->next));
	}
	else if (h != NULL && h->str == NULL)
	{
		printf("[%d] %s\n", 0, "(nil)");
		return (1 + print_list(h->next));
	}
	return (0);
}
