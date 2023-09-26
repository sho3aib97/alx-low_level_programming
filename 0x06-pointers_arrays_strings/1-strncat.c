include "main.h"

/**
 * _strlen - get the length of string
 * @str: string to be measured
 * Return: unsigned integer
*/

int _strlen(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;
	return (i);
}

/**
 * _strncat - concatinate two strings
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to copy
 * Return: pointer to string
*/

char *_strncat(char *dest, char *src, int n)
{
	int i;

	int s1 = _strlen(dest);
	int s2 = _strlen(src);

	for (i = s1; i < s1 + n; i++)
		dest[i] = src[i - s1];
	dest[i] = '\0';

	return (dest);
}
