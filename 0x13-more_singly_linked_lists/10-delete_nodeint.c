#include "lists.h"
/**
 * delete_nodeint_at_index - delete a node in at given index
 * @head: Reference to the head of the list
 * @index: Position in the list to delete the node
 * Return: 1 is succeeded or -1 is failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head, *node;
	int i = 0;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
	}
	else
	{
		while (i < (int) index - 1)
		{
			temp = temp->next;
			if (temp == NULL)
				return (-1);
			i++;
		}
		node = temp;
		node = node->next;
		temp->next = node->next;
		free(node);
	}
	return (1);
}
