#include "lists.h"
#include <stdio.h>
/**
 * free_listint_safe - free list with a loop
 * @h: pointer to refer the head of linked list
 * Return: Number of elements into the linked list
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *early, *after;
	int i = 0;

	if (h == NULL || *h == NULL)
		return (0);

	early = (void *)*h;
	while (early != NULL)
	{
		after = early;
		early = early->next;

		i++;

		free(after);

		if (after <= early)
		{
			break;
		}
	}
	*h = NULL;
	return (i);
}
