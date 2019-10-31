#include "lists.h"
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
 * add_node - add a node into list
 * @head: Address of first element in the list
 * Return: List with all nodes added
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));

	if (str != NULL)
	{
		new->str = (char *)str;
		new->len = _strlen(str);
	}
	else
	{
		new->str = "(nil)";
		new->len = 5;
	}
	new->next = (*head);
	(*head) = new;
	return (*head);
}
