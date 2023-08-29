#include "main.h"

/**
 * *_strchr - A function to fill memory with constant byte
 *
 * @s : pointer of the char array
 *
 * @c : the constant
 *
 * Return: pointer to the first occurance of c in s
*/

char *_strchr(char *s, char c)
{
	unsigned int r;

	for (r = 0; s[r] >= '\0'; r++)
	{
		if (s[r] == c)
			return (&s[r]);
	}
	return ('\0');
}
