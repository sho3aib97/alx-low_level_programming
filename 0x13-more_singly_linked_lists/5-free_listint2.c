#include "lists.h"

/**
 * free_listint2 - free single linked list
 * @head: address of head pointer
 * Return: void (no value)
*/

void free_listint2(listint_t **head)
{
	listint_t *ptr2;
	listint_t *ptr1 = *head;

	if (!head || !*head)
		return;
	while (ptr1)
	{
		ptr2 = ptr1;
		ptr1 = ptr1->next;
		free(ptr2);
	}
	*head = NULL;
}
