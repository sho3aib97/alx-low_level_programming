#include "main.h"

/**
 * malloc_checked - reserve memory using malloc
 *
 * @b: size of memory in int
 *
 * Return: pointer to the memory
*/

void *malloc_checked(unsigned int b)
{
	void *memory;

	memory = malloc(b);

	if (memory == 0)
		exit(98);

	return (memory);
}
