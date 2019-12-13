#include "lists.h"
/**
 * free_dlistint - free a doubly linked list
 * @head: Pointer to the first node of doubly linked list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *next;

	if (head == NULL)
		return;
	while (head->next != NULL)
	{
		next = head->next;
		free(head);
		head = next;
	}
	free(head);
}
