#include "main.h"

/**
 * _strlength - calcualte the length of a string
 *
 * @ar : string input
 *
 * Return: value of i as type int
*/

int _strlength(char *ar)
{
	int i;

	for (i = 0; ar[i] != '\0'; i++)
		;
	return (i);
}

/**
 * str_concat - concatinate two stings followed by a terminator
 *
 * @s1 : string number 1
 * @s2 : string number 2
 *
 * Return: pointer valuse to the new memory location
*/

char *str_concat(char *s1, char *s2)
{
	int n1, n2, i;
	char *new_str;

	if (s1 == NULL)
		s1 = "\0";

	if (s2 == NULL)
		s2 = "\0";

	n1 = _strlength(s1);
	n2 = _strlength(s2);
	new_str = (char *)malloc(sizeof(char) * (n1 + n2) + 1);

	if (new_str == 0)
		return (0);

	for (i = 0; i <= (n1 + n2); i++)
	{
		if (i < n1)
			new_str[i] = s1[i];
		else
			new_str[i] = s2[i - n1];
	}
	new_str[i] = '\0';
	return (new_str);
}
