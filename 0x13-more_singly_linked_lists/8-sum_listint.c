#include "lists.h"

/**
 * sum_listint - sum of all nodes
 * @head: pointer to first node
 * Return: int value of sum
*/

int sum_listint(listint_t *head)
{
	int sum;
	listint_t *ptr = head;

	if (!head)
		return (0);

	sum = (ptr->n) + sum_listint(ptr->next);

	return (sum);
}
