#include "lists.h"
/**
 * sum_dlistint - sum all the elements of the doubly linked list
 * @head: Reference to the first node
 * Return: Sum of all elements if there are nodes or 0 if not
 */
int sum_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return (0);
	return (head->n + sum_dlistint(head->next));
}
