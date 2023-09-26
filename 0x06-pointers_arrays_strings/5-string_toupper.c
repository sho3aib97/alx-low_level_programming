#include "main.h"

/**
 * *string_toupper - change to all lower case
 * @str: string
 * Return: pointer to string
*/

char *string_toupper(char *str)
{
	int n;

	for (n = 0; str[n] != '\0'; n++)
	{
		if (str[n] >= 97 && str[n] <= 122)
		{
			str[n] = str[n] - 32;
		}
	}
	return (str);
}
