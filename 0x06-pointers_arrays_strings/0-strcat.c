#include "main.h"

/**
 * _strlen - get the length of string
 * @str: string to be measured
 * Return: unsigned integer
*/

unsigned int _strlen(char *str)
{
	unsigned int i;

	for (i = 0; str[i] != '\0'; i++)
		;
	return (i);
}

/**
 * _strcat - concatinate two strings
 * @dest: destination string
 * @src: source string
 * Return: pointer to string
*/

char *_strcat(char *dest, char *src)
{
	unsigned int i;

	unsigned int s1 = _strlen(dest);
	unsigned int s2 = _strlen(src);

	for (i = s1; i < s1 + s2; i++)
		dest[i] = src[i - s1];
	dest[i] = '\0';

	return (dest);
}
