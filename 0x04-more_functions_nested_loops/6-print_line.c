#include "main.h"

/**
 * print_line - print a line using a specific n of _
 *
 * @n: input for the number of _ that will be printed
*/

void print_line(int n)
{
	int i;

	if (n <= 0)
		_putchar('\n');
	else
	{
		i = n + 1;

		while (--i)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
