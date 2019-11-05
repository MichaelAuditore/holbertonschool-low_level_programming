#include "lists.h"
/**
 * insert_nodeint_at_index - create a node into position given
 * @head: reference to the head of linked list
 * @idx: Index to create the node
 * @n: Element to create as node
 * Return: List with new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	listint_t *tmp = *head;
	int i = 0;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	if (head == NULL && idx > 0)
		return (NULL);

	for (i = 0; i < (int) idx - 1; i++)
	{
		if (tmp == NULL && idx - i > 0)
		{
			free(new);
			return (NULL);
		}
		tmp = tmp->next;
	}
	new->n = n;
	new->next = tmp->next;
	tmp->next = new;
	return (new);
}
