#include "lists.h"

/**
 * insert_nodeint_at_index - insert a node in a specific index
 * @head: pointer to first node
 * @idx: specific index to insert into
 * @n: value of n in new node
 * Return: pointer to new node inserted
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;

	listint_t *ptr;
	listint_t *newPtr = malloc(sizeof(listint_t));

	if (!head || !newPtr)
		return (NULL);

	if (idx > listint_len(*head))
		return (NULL);

	ptr = *head;

	while (i < idx)
	{
		if (ptr)
			ptr = ptr->next;
		i++;
	}
	newPtr->n = n;
	newPtr->next = ptr;
	ptr = newPtr;

	return (newPtr);
}
