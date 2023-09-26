#include "lists.h"

/**
 * delete_nodeint_at_index - delete node at specific index
 * @head: address of pointer to first node
 * @index: index of node to be deleted
 * Return: 1 on success and -1 on failure
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int m = 0;
	listint_t *ptr1 = NULL;
	listint_t *ptr2 = NULL;

	if (!head || !*head)
		return (-1);

	if (!index)
	{
		ptr2 = *head;
		*head = (*head)->next;
		free(ptr2);
		return (1);
	}
	ptr2 = *head;

	while (ptr2)
	{
		if (m == index)
		{
			ptr1->next = ptr2->next;
			free(ptr2);
			return (1);
		}
		m++;
		ptr1 = ptr2;
		ptr2 = ptr2->next;
	}
	return (-1);
}
