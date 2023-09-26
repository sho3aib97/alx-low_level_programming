#include "lists.h"

/**
 * free_listint - frees linked list
 * @head: pointer to head of linked list
 * Return: void (no value)
*/

void free_listint(listint_t *head)
{
	listint_t *ptr;

	while (head)
	{
		ptr = head;
		head = head->next;
		free(ptr);
	}
	ptr = NULL;
}
