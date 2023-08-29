#include "main.h"

/**
 * *_strstr - function finds the first occurrence of the substring
 *
 * @haystack: a pointer to a string to search into
 *
 * @needle: a pointer to string to search about
 *
 * Return: a pointer to the first occurence of needle in haystack
*/

char *_strstr(char *haystack, char *needle)
{
	unsigned int b, d;
	char *ptr;

	for (b = 0; haystack[b] != '\0'; b++)
	{
		for (d = 0; needle[d] == haystack[b]; d++)
		{
			ptr = &haystack[b];
			return (ptr);
		}
	}
	return (0);
}
