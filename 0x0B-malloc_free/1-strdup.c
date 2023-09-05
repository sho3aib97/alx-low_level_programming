#include "main.h"

/**
 * _strdup - duplicate string and return a pointer to its first element
 *
 * @str: the string to be duplicated
 *
 * Return: address of first element of str2
*/

char *_strdup(char *str)
{
	char *str2;
	int i;
	int x = (int)(sizeof(str) / sizeof(str[0]));

	str2 = (char *)malloc(sizeof(char) * x);

	if (str == NULL)
		return (NULL);

	else if (sizeof(str) > sizeof(str2))
		return (NULL);

	else
	{
		for (i = 0; i < x + 1; i++)
			str2[i] = str[i];
	}
	return (str2);
}
