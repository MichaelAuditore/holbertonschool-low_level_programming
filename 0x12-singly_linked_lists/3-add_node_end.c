#include "lists.h"
#include <string.h>

/**
 * _strlen - returns the length of string
 * @str: Array of char to validate the length
 * Return: Length of array
 */
int _strlen(const char *str)
{
	return (*str > 0 ? ((_strlen(str + 1)) + 1) : 0);
}
/**
 * add_node_end - add node at the end
 * @head: Address of linked list
 * @str: String to copy and create node
 * Return: Address of linked list with the new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tmp = malloc(sizeof(list_t));
	list_t *last = *head;

	if (tmp == NULL)
		return (NULL);

	if (str != NULL)
	{
		tmp->str = strdup(str);
		if (tmp->str == NULL)
		{
			return (NULL);
		}
		tmp->len = _strlen(str);
	}
	else
	{
		tmp->str = "(nil)";
		tmp->len = 0;
	}
	tmp->next = NULL;
	if (*head == NULL)
	{
		*head = tmp;
		return (tmp);
	}
	while (last->next != NULL)
		last = last->next;
	last->next = tmp;
	return (last);
}
