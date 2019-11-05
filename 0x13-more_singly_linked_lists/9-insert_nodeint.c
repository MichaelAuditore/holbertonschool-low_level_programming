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
	listint_t *new, *tmp = *head;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));
	new->n = n;
	if (new == NULL)
		return (NULL);
	if (*head == NULL && idx > 0)
	{
		free(new);
		return (NULL);
	}
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	while (i < idx - 1)
	{
		tmp = tmp->next;
		if (tmp == NULL && idx - i > 0)
		{
			free(new);
			return (NULL);
		}
		i++;
	}
	new->next = tmp->next;
	tmp->next = new;
	return (new);
}
