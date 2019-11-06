#include "lists.h"
#include <stdio.h>
/**
 * find_listint_loop - find when the loop start into a linked list
 * @head: reference to the head of linked list
 * Return: Node when start the loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *early, *after;

	if (head == NULL)
		return (0);
	if (head == head->next)
		return (head);

	early = (void *)head;
	while (early != NULL)
	{
		after = head;
		early = early->next;

		for (; after != early && early != NULL; after = after->next)
		{
			if (early->next == early)
				return (early);
			if (early->next == after)
				return (after);
		}
	}
	return (early);
}
