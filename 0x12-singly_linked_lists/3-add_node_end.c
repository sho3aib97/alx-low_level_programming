#include "lists.h"

/**
 * add_node_end - add node to the end of the list
 * @head: pointer to list
 * @str: new string
 * Return: address of new item
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp = malloc(sizeof(list_t));
	list_t *end = *head;

	if (!temp || !head)
		return (NULL);
	if (str)
	{
		temp->str = strdup(str);
		if (!(temp->str))
		{
			free(temp->str);
			return (NULL);
		}
		temp->len = _strlen(temp->str);
	}
	if (end)
	{
		while (end->next)
			end = end->next;
			end->next = temp;
	}
	else
		*head = temp;
	return (temp);
}
