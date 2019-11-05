#include "lists.h"
/**
 * free_listint2 - free the linked list
 * @head: Pointer to the linked list
 */
void free_listint2(listint_t **head)
{
	listint_t **tmp = head;
	listint_t *current = *head;
	listint_t *next;

	if (tmp == NULL)
		return;
	if (current == NULL)
		return;
	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
	*head = NULL;
}
