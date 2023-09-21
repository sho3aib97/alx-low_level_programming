#include "lists.h"

/**
* _strlen - return length of string
* @str: string to be calculated
* Return: length
*/

unsigned int _strlen(const char *str)
{
	unsigned int i = 0;

	while (str[i])
		i++;
	return (i);
}

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
