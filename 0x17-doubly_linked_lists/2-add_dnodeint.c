#include "lists.h"
/**
 * add_dnodeint - add a node into a doubly linked list
 * @head: Pointer to the reference of first node
 * @n: number to add into doubly linked list
 * Return: pointer with the reference to the new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *tmp = *head;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = *head;

	if (*head != NULL)
		tmp->prev = new;
	*head = new;
	return (*head);
}
