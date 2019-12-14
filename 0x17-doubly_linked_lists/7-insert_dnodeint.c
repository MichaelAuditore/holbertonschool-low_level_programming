#include "lists.h"
/**
 * dlistint_len - gets the length of a doubly linked list
 * @h: reference to the first node of the linked list
 * Return: length of linked list
 */
unsigned int n_nodes(dlistint_t *h)
{
	unsigned int num = 0;
	dlistint_t *next;

	for (next = h; next; num++, next = next->next)
		;
	return (num);
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
	unsigned int i = 1;

	if (h == NULL)
		return (NULL);
	if (idx == 0 || *h == NULL)
		new = add_dnodeint(h, n);
	if (idx > n_nodes(*h))
		return (NULL);
	if (idx == n_nodes(*h))
		new = add_dnodeint_end(h, n);
	else
	{
		while (tmp != NULL)
		{
			if (i == idx)
			{
				new = malloc(sizeof(dlistint_t));
				if (new == NULL)
					return (NULL);
				new->n = n;
				new->next = tmp->next;
				new->prev = tmp;
				tmp->next->prev = new;
				tmp->next = new;
				break;
			}
			i++;
			tmp = tmp->next;
		}
	}
	return (new);
}
