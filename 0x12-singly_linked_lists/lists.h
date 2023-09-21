#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>
/**
 * struct list_t - (singly) linked list
 * @str: a string
 * @len: the length of string
 * @next: pointer to next node
 * Description: (singly linked list)
*/

typedef struct list_t
{
	char *str;
	unsigned int len;
	struct list_t *next;
} list_t;

int _putchar(char c);
size_t print_list(const list_t *h);

#endif
