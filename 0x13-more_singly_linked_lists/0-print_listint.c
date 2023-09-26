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
	size_t m = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		m++;
	}
	return (m);
}
