#include "lists.h"

/**
 * add_nodeint_end - add a node to the end of single link list
 * @head: pointer to pointer of struct
 * @n: new value of n
 * Return: pointer to new node
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *eNode = malloc(sizeof(listint_t));
	listint_t *ptr = NULL;

	if (!head || !eNode)
		return (NULL);

	eNode->next = NULL;
	eNode->n = n;

	if (!*head)
		*head = eNode;
	else
	{
		ptr = *head;

		while (ptr->next)
			ptr = ptr->next;
		ptr->next = eNode;
	}
	return (eNode);
}
