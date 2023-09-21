#include "lists.h"

/**
* _strlen - return length of string
* @str: string to be calculated
* Return: length
*/

unsigned int _strlen(const char *str)
{
	unsigned int i = 0;

	if (str)
	{
		while (str[i])
			i++;
	}
	return (i);
}

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
			free(temp);
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
