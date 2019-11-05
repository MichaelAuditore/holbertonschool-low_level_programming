#include "lists.h"
/**
 * free_listint2 - free the linked list
 * @head: Pointer to the linked list
 */
void free_listint2(listint_t **head)
{
	listint_t *current = *head;
	listint_t *next;

	if (head == NULL)
		return;
	while (current != NULL && head != NULL)
	{
		next = current;
		current = current->next;
		free(next);
	}
	*head = NULL;
}
