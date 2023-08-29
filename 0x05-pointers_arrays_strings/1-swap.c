#include "main.h"

/**
 * swap_int - a function that swaps walues
 *
 * @a: number 1 to swap with number 2
 *
 * @b: number 2 to swap with numer 1
 *
 * Return: void value
*/

void swap_int(int *a, int *b)
{
	int i, j;

	i = *a;
	j = *b;
	*a = j;
	*b = i;
}
