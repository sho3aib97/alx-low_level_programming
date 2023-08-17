#include "main.h"

/**
 * print_diagonal - a function to print a diagonal line
 *
 * @n: the number of \ character have to be printed
*/

void print_diagonal(int n)
{
	int i;
	int v;

	if (n <= 0)
		_putchar('\n');
	else
	{
		v = n;

		do {
			for (i = 1; i <= n - v; i++)
				_putchar(32);
			_putchar(92);
			_putchar('\n');
		} while (--v);
	}
}
