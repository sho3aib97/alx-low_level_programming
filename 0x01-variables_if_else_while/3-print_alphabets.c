#include <stdio.h>

/**
 * main - print lowercase then uppercase
 * Return: zero alway success
*/

int main(void)
{
	char m = 'a';

	while (m <= 'z')
	{
		putchar(m);
		m++;
	}

	m = 'A';

	while (m <= 'Z')
	{
		putchar(m);
		m++;
	}
	putchar('\n');

	return (0);
}
