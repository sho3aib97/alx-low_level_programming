#include "lists.h"

/**
 * pop_listint - delete first node from list
 *
 * @head: head pointer to first node
 *
 * Return: n value of node head node
*/

int pop_listint(listint_t **head)
{
	listint_t *ptr = *head;
	int i;

	if (!head || !*head)
		return (0);

	*head = ptr->next;
	i = ptr->n;
	free(ptr);
	ptr = NULL;

	return (i);
}
