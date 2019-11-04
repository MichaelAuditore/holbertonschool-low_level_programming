#include "lists.h"
/**
 * get_nodeint_at_index - get a node by index
 * @head: Linked list
 * @index: Position to get
 * Return: Pointer with position
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	while (head->next != NULL)
	{
		i++;
		if (i == index)
		{
			head = head->next;
			break;
		}
		head = head->next;
	}
	if (i < index)
		return (NULL);
	return (head);
}
