#include <stdio.h>

/**
 * main - print reversely alphabets
 * Return: zero always success
*/

int main(void)
{
	char m = 'z';

	while (m >= 'a')
	{
		putchar(m);
		m--;
	}
	putchar('\n');
	return (0);
}
