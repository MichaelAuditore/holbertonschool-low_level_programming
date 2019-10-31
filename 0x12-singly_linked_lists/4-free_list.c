#include "lists.h"
/**
 * free_list - free the memory of each node in the list
 * @head: Address of the list
 */
void free_list(list_t *head)
{
	list_t *current = head;
	list_t *next;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
	head = NULL;
}
