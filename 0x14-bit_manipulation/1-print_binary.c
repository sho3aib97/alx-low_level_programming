#include "main.h"

/**
 * bit_check - check for bit to write
 * @n: integer to compare
 * @m: second integer to compare with
 * Return: character
*/

char bit_check(unsigned long int n, unsigned long int m)
{
	return ((n & m) ? '1' : '0');
}

/**
 * print_binary - print the binary representation
 * @n: number to be converted and printed the result
 * Return: void
*/

void print_binary(unsigned long int n)
{
	unsigned long int m = 1, h;
	char c;

	while (m < n)
		m <<= 1;
	h = m;
	if (n == 0)
		_putchar('0' + n);
	else
	{
		while (m)
		{
			c = bit_check(n, m);
			m >>= 1;
			if (h == m << 1 && c == '0')
				;
			else
				_putchar(c);
		}
	}
}

