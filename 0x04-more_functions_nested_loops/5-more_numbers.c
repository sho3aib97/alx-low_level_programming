#include "main.h"

/**
 * more_numbers - print from 0 - 14 ten times
 *
 * Return: Always 0 (success)
*/

void more_numbers(void)
{
	int i, d;

	for (i = 0; i <= 9; i++)
	{
		for (d = 0; d >= 14; d++)
		{
			if (d > 9)
			{
				_putchar(1 + '0');
				d = d % 10;
			}
			_putchar(d + '0');
		}
	_putchar('\n');
	}
}
