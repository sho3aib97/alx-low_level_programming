#include "lists.h"

/**
 * get_nodeint_at_index - get a nth node of linked list
 * @head: pointer to first node
 * @index: number of node starting from zero
 * Return: pointer to nth node or NULL if fails
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *ptr = head;

	while (i < index)
	{
		if (ptr)
			ptr = ptr->next;
		i++;
	}
	if (!ptr)
		return (NULL);
	return (ptr);
}
