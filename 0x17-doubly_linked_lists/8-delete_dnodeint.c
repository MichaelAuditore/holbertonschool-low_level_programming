#include "lists.h"
/**
 * dlistint_len - gets the length of a doubly linked list
 * @h: reference to the first node of the linked list
 * Return: length of linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	if (h == NULL || h->next == NULL)
		return (0);
	return (1 + dlistint_len(h->next));
}

/**
 * delete_dnodeint_at_index - delete a node by a given index
 * @head: pointer to the reference of the first node
 * @index: position given to delete the node in these position
 * Return: 1 on success or -1 on failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	int idx = 0;
	dlistint_t *delnode = *head;

	if (delnode == NULL || dlistint_len(*head) < index || head == NULL)
		return (-1);
	else
	{
		while ((unsigned int)idx != index)
		{
			delnode = delnode->next;
			idx++;
		}
		if (idx == 0)
			*head = delnode->next;
		if (delnode->next != NULL)
			delnode->next->prev = delnode->prev;
		if (delnode->prev != NULL)
			delnode->prev->next = delnode->next;
	}
	free(delnode);
	return (1);
}
