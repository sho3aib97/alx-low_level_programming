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
	int x;

	for (x = 0; str[x] != '\0'; x++)
		;

	str2 = (char *)malloc(sizeof(char) * (x + 1));

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
