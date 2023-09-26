#include "lists.h"

/**
 * print_listint - print linked list and return num of nodes
 *
 * @h: head pointer to linked list
 *
 * Return: number of nodes
*/

size_t print_listint(const listint_t *h)
{
	size_t i = 1;

	if (!h)
		return (0);
	printf("%d\n", h->n);

	if (h->next != NULL)
		i += print_listint(h->next);

	return (i);
}
