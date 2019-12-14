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
/**
 * insert_dnodeint_at_index - insert a node in a given position
 * @h: Pointer to reference to the first node
 * @idx: index to add the new node
 * @n: Number to add into the doubly linked list
 * Return: NULL if its fail or reference to the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new;
	dlistint_t *tmp = *h;
	unsigned int i = 0;

	if (idx > dlistint_len(*h) || (*h == NULL && idx > 0))
		return (NULL);

	if (idx == dlistint_len(*h))
		return (add_dnodeint_end(h, n));
	else if (idx == 0)
		return (add_dnodeint(h, n));
	while (i < idx - 1)
	{
		tmp = tmp->next;
		i++;
	}
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = tmp->next;
	new->next = tmp->next;
	tmp->next->prev = new->next;
	tmp->next = new;
	return (tmp);
}
