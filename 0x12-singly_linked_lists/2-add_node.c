#include "lists.h"
/**
* _strlen - return length of string
* @str: string to be calculated
* Return: length
*/

unsigned int _strlen(const char *str)
{
       unsigned int i = 0;

       while (str[i])
	       i++;
       return (i);
}
/**
 * add_node - adds a node to the first of the list
 * @head: pointer to a pointer of first element of list
 * @str: new string to be added
 * Return: pointer to new element or NULL
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp = malloc(sizeof(list_t));

	if (!head || !temp)
		return (NULL);
	if (str)
	{
		temp->str = strdup(str);
		if (!temp->str)
		{
			free(temp->str);
			return (NULL);
		}
		temp->len = _strlen(temp->str);
	}
	temp->next = *head;
	*head = temp;
	return (temp);
}
