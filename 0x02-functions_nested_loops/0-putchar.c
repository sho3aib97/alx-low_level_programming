#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Description: printing characters using putchar prototype
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char putchr[] = "_putchar";

	for (int c = 0; c < 8; c++)
		_putchar(putchr[c]);
	_putchar("\n");
i
	return (0);
}
