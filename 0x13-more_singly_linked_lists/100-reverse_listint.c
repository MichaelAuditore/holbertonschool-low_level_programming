#include "lists.h"
/**
 * reverse_listint - reverse a list
 * @head: reference to linked list
 * Return: List reversed
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *t_prev;
	listint_t *t_next;

	t_prev = NULL;
	t_next = *head;
	while (*head != NULL)
	{
		t_next = t_next->next;
		head[0]->next = t_prev;
		t_prev = *head;
		*head = t_next;
	}
	*head = t_prev;
	return (*head);
}
