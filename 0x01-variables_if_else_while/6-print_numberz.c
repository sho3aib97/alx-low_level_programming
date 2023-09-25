#include <stdio.h>

/**
 * main - print single numbers using int variable
 * Return: zero always success
*/

int main(void)
{
	int a = 0;

	while (a <= 9)
	{
		putchar('0' + a);
		a++;
	}
	putchar('\n');
	return (0);
}
