#include <stdio.h>

/**
 * main - return lowercase letters
 * Return: always 0 (success)
*/

int main(void)
{
	char m = 'a';

	while (m <= 'z')
	{
		putchar(m);
		m++;
	}
	putchar('\n');
	return (0);
}
