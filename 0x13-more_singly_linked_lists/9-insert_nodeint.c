#include "lists.h"

/**
 * listint_len - return length of single linked list
 * @h: head pointer to the list
 * Return: size_t value of length
*/

size_t listint_len(const listint_t *h)
{
	size_t i = 1;

	if (!h)
		return (0);
	if (h->next)
		i += listint_len(h->next);
	return (i);
}

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

	while (i < idx - 1)
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
