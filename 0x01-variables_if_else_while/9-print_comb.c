#include <stdio.h>

/**
 * main - print all possible single digits
 * Return: zero always success
*/

int main(void)
{
	int n = 0;

	while (n <= 9)
	{

		putchar('0' + n);
		if (n != 9)
		{
			putchar(',');
			putchar(' ');
		}
		else
			putchar('\n');
		n++;
	}
	return (0);
}
