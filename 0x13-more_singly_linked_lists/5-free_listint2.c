#include "lists.h"

/**
 * free_listint2 - free single linked list
 * @head: address of head pointer
 * Return: void (no value)
*/

void free_listint2(listint_t **head)
{
	listint_t *ptr;

	while (*head)
	{
		ptr = *head;
		*head = *head->next;
		free(ptr);
	}
	ptr = NULL;
}
