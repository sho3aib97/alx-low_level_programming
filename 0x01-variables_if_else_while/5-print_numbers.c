#include <stdio.h>

/**
 * main - print single digits followed by a newline
 * Return: zero always success
*/

int main(void)
{
	int a = 0;

	while (a < 10)
	{
		printf("%d");
		a++;
	}
	printf("\n");
	return (0);
}
