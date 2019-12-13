#include "lists.h"
/**
 * dlistint_len - gets the length of a doubly linked list
 * @h: reference to the first node of the linked list
 * Return: length of linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	if (h == NULL || h->next == NULL)
		return (0);
	return (1 + dlistint_len(h->next));
}
/**
 * get_dnodeint_at_index - get a node by an given index
 * @head: reference to the first node
 * @index: Position of node
 * Return: Founded node or NULL if don't exists
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	if (head == NULL || dlistint_len(head) < index)
		return (NULL);
	return (index == 0 ? head : get_dnodeint_at_index(head->next, index - 1));
}
