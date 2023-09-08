#include "main.h"

/**
 * _strlen - calculate length of string
 *
 * @s: string
 *
 * Return: length of string s
*/

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}

/**
 * string_nconcat - concatinate two strings by certain n of bytes
 *
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes
 *
 * Return: pointer or NULL if fails
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int l1, l2, n1, n2;
	char *new_mem;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	l1 = _strlen(s1);
	l2 = _strlen(s2);

	new_mem = malloc(l1 + n + 1);

	if (new_mem == NULL)
		return (NULL);

	for (n1 = 0; s1[n1] != '\0'; n1++)
		new_mem[n1] = s1[n1];

	for (n2 = 0; n2 < n; n2++)
	{
		new_mem[n1] = s2[n2];
		n1++;
	}

	new_mem[n1] = '\0';
	return (new_mem);
}
