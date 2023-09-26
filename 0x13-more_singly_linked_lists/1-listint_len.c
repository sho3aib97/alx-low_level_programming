#include "lists.h"

/**
 * listint_len - return length of single linked list
 * @h: head pointer to the list
 * Return: size_t value of length
*/

size_t listint_len(const listint_t *h)
{
	size_t n = 1;

	if (!h)
		return (0);
	if (h->next)
		n += list_len(h->next);
	return (n);
}
