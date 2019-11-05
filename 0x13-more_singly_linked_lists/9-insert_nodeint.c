#include "lists.h"
/**
 * insert_nodeint_at_index - create a node into position given
 * @head: reference to the head of linked list
 * @idx: Index to create the node
 * @n: Element to create as node
 * Return: List with new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode, *temp;
	unsigned int i;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;
	temp = *head;
	i = 0;
	if (*head == NULL && idx > 0)
	{
		free(newNode);
		return (NULL);
	}
	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}
	while (i < idx - 1)
	{
		temp = temp->next;
		if (temp == NULL && idx - i > 0)
		{
			free(newNode);
			return (NULL);
		}
		i++;
	}
	newNode->next = temp->next;
	temp->next = newNode;
	return (newNode);
}
