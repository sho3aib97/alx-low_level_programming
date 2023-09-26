#include "main.h"

/**
 * _islower - determine lowercase or not
 * @c: character
 * Return: 1 if true
*/

int _islower(char c)
{
	return (c >= 97 && c <= 122);
}

/**
 * _isdelimiter - determine is it delimiter or not
 * @c: character
 * Return: 1 if true
*/

int _isdelimiter(char c)
{
	int n;
	char _delimiter[] = "\t\n,.!?\"(){}";

	for (n = 0; n < 12; n++)
		if (c == _delimiter[n])
			return (1);
	return (0);
}

/**
 * cap_string - turn all words into capitals
 * @s: string
 * Return: pointer to new string
*/

char *cap_string(char *s)
{
	char *pointer = s;
	int fDelimiter = 1;

	while (*s)
	{
		if (_isdelimiter(*s))
			fDelimiter = 1;
		else if (_islower(*s) && fDelimiter)
		{
			*s -= 32;
			fDelimiter = 0;
		}
		else
			fDelimiter = 0;
		s++;
	}
	return (pointer);
}
