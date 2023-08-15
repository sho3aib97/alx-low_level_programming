#include "main.h"

/**
 * print_alphabet - print the alphabet from a to z using _putchar
 *
*/

void print_alphabet(void)
{
	int c;

	for (c = 'a'; c <= 'z'; c++)
		_putchar(c);
	_putchar('\n');
}
