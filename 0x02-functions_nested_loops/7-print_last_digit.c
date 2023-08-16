#include "main.h"

/**
 * print_last_digit - function that print last digit
 *
 *@n: input
 *
 *Return: ld
*/

int print_last_digit(int n)
{
	int ld;
	if (n < 0)
		ld = (-1) * (n % 10);
	else
		ld = n % 10;

	_putchar(ld +48);
	return (ld);
}
