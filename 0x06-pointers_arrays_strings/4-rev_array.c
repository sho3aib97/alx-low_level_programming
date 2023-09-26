#include "main.h"

/**
 * reverse_array - reverse array of integers
 * @a: array of integers
 * @n: number of elements within the array
 * Return: void
*/

void reverse_array(int *a, int n)
{
	int m, v, h;

	for (m = 0, v = (n - 1); m < v; m++, v--)
	{
		h = a[m];
		a[m] = a[v];
		a[v] = h;
	}
}
