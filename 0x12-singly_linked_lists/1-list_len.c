#include "lists.h"

/**
 * list_len - return list's length
 * @h: pointer to first element
 * Return: length of list
*/

size_t list_len(const list_t *h)
{
	size_t n = 1;

	if (!h)
		return (0);
	if (h->next)
		n += list_len(h->next);
	return (n);
}
