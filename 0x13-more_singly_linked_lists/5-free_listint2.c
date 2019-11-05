#include "lists.h"
/**
 * free_listint2 - free the linked list
 * @head: Pointer to the linked list
 */
void free_listint2(listint_t **head)
{
	listint_t *tmpnext;

	if (head)
	{
		while (*head)
		{
			tmpnext = *head;
			*head = tmpnext->next;
			free(tmpnext);
		}
	}
}
