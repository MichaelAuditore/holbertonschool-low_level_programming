#include "lists.h"
#include <stdio.h>
/**
 * pop_listint - delete the head node
 * @head: Address of linked list
 * Return: the element in the deleted node
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp = *head;
	int node;

	if (*head == NULL)
		return (0);
	tmp = *head;
	node = tmp->n;
	*head = tmp->next;
	free(tmp);
	return (node);
}
