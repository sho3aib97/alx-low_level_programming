#include "lists.h"

/**
 * free_list - free list memory
 * @head: pointer to first element
 * Return: void
*/

void free_list(list_t *head)
{
	if (head)
	{
		if (head->next != NULL)
			free_list(head->next)
		free(head->str);
		if (head->next)
			free(head->next);
	}
	else
		return;
}
