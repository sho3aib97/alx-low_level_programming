#include <stdio.h>

/**
 * main - print the base 16 values
 * Return: zero always success
*/

int main(void)
{
	char m = '0';

	while (m <= '9')
	{
		putchar(m);
		m++;
	}

	m = 'a';

	while (m <= 'f')
	{
		putchar(m);
		m++;
	}
	putchar('\n');
	return (0);
}
