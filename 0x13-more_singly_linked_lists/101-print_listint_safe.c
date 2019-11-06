#include "lists.h"
#include <stdio.h>
/**
 * print_listint_safe - print list with a loop
 * @head: reference to the head of linked list
 * Return: Number of elements into the linked list
 */
size_t print_listint_safe(const listint_t *head)
{
	listint_t *early, *after;
	int i = 0;

	if (head == NULL)
		return (0);

	early = (void *)head;
	while (early != NULL)
	{
		after = early;
		early = early->next;

		i++;

		printf("[%p] %d\n", (void *)after, after->n);

		if (after <= early)
		{
			printf("-> [%p] %d\n", (void *)early, early->n);
			break;
		}
	}
	return (i);
}
