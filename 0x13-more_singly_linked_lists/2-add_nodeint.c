#include "lists.h"
/**
 * add_nodeint - Add a new node into list
 * @head: The initial position of list
 * @n: element to add into new list
 * Return: List with elements added
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *tmp;

	tmp = malloc(sizeof(listint_t));
	if (tmp == NULL)
		return (NULL);
	if (*head == NULL)
	{
		tmp->n = n;
		tmp->next = NULL;
		*head = tmp;
		return (tmp);
	}
	tmp->n = n;
	tmp->next = *head;
	*head = tmp;
	return (*head);
}
