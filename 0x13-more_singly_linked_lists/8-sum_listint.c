#include "lists.h"
/**
 * sum_listint - sum all elements of a list
 * @head: Linked list
 * Return: the sum of all elements
 */
int sum_listint(listint_t *head)
{
	if (head != NULL)
	{
		return (head->n + sum_listint(head->next));
	}
	return (0);
}
