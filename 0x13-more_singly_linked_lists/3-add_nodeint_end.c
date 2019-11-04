#include "lists.h"
/**
 * add_nodeint_end - add a new node into the final of list
 * @head: Address with linked list
 * @n: Element to add
 * Return: List with new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *tmp;
	listint_t *last = *head;

	tmp = malloc(sizeof(listint_t));

	if (tmp == NULL)
		return (NULL);
	tmp->n = n;
	tmp->next = NULL;

	if (*head == NULL)
	{
		*head = tmp;
		return (tmp);
	}
	while (last->next != NULL)
		last = last->next;
	last->next = tmp;
	return (tmp);
}
