#include "main.h"

/**
 * _strncpy - copy the n byte from src to dest
 * @dest: string to be added to
 * @src: source string from to be copied
 * @n: number of bytes to copy
 * Return: new string after copying
*/

char *_strncpy(char *dest, char *src, int n)
{
	int m;

	for (m = 0; m < n && src[m] != '\0'; m++)
		dest[m] = src[m];

	while (m < n)
	{
		dest[m] = '\0';
		m++;
	}
	return (dest);
}
