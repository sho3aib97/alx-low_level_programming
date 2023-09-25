#include <stdio.h>

/**
 * main - print lowercase except e or q
 * Return: zero always success
*/

int main(void)
{
	char m = 'a';

	while (m <= 'z')
	{
		if (m == 'e' || m == 'q')
			m++;
		else
		{
			putchar(m);
			m++;
		}
	}
	putchar('\n');
	return (0);
}
