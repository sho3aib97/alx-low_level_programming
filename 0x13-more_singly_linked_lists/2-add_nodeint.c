#include "lists.h"

/**
 * add_nodeint - adding node in the beginning of a list
 * @head: pointer to pointer head of struct
 * @n: new value of n
 * Return: pointer to the new node
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nNode = malloc(sizeof(listint_t));

	if (!head || !nNode)
		return (NULL);
	nNode->next = NULL;
	nNode->n = n;
	if (*head)
		nNode->next = *head;
	*head = nNode;
	return (nNode);
}
