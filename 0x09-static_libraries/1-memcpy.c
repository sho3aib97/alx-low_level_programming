#include "main.h"

/**
 * *_memcpy - A function to copy memory area
 *
 * @dest: destination memory area
 *
 * @src: source memory area
 *
 * @n: length of memory area to be coped
 *
 * Return: pointer dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int m;

	for (m = 0; m < n; m++)
	{
		dest[m] = src[m];
	}
	return (dest);
}
