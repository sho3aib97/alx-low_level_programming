#include "main.h"

/**
 * more_numbers - print from 0 - 14 ten times
 *
 * Return: Always 0 (success)
*/

void more_numbers(void)
{
	int i;
	int d;
	int m;

	for (i = 0; i <= 9; i++)
	{
		for (d = 0; d <= 14; d++)
		{
			m = d;
			if (m > 9)
			{
				_putchar(1 + 48);
				m = d % 10;
			}
			_putchar(m + 48);
		}
	_putchar('\n');
	}
}
