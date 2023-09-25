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
	char *new_str;
	unsigned int i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	if (n >= _strlen(s2))
		new_str = malloc(sizeof(char) * (_strlen(s1) + _strlen(s2) + 1));
	else
		new_str = malloc(sizeof(char) * (_strlen(s1) + n + 1));

	if (new_str == NULL)
		return (NULL);

	for (i = 0; i < _strlen(s1) + n; i++)
	{
		if (i < _strlen(s1))
			new_str[i] = s1[i];
		else
			new_str[i] = s2[i - _strlen(s1)];
	}
	new_str[i] = '\0';
	return (new_str);
}
