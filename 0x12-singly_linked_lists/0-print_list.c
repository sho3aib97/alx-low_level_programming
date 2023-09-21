#include "lists.h"

/**
 * print_list - print list and return node number
 * @h: a pointer to struct
 * Return: number of nodes
*/

size_t print_list(const list_t *h)
{
	unsigned int n = 1;

	if (h->str)
		printf("[%d] %s\n", h->len, h->str);
	else
		printf("[0] (nil)\n");

	if (h->next != NULL)
		n += print_list(h->next);

	return (n);
}