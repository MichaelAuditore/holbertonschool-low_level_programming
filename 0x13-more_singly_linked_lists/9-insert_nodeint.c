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
	listint_t *tmp2 = *head;
	int i = 0;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	if (head == NULL)
		return (NULL);

	while (tmp != NULL)
	{
		tmp = tmp->next;
		i++;
	}
	if (i < (int) idx)
	{
		free(new);
		return (NULL);
	}
	for (i = 0; i < (int) idx - 1; i++)
	{
		if (tmp2 == NULL && (int) idx - i > 0)
		{
			free(new);
			return (NULL);
		}
		tmp2 = tmp2->next;
	}
	new->n = n;
	new->next = tmp2->next;
	tmp2->next = new;
	return (new);
}
