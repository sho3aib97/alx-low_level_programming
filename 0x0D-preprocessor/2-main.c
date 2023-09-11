#include <stdio.h>

/**
 * main - print file name whom compiled from
 *
 * Return: always success (0)
*/

int main(void)
{
	printf("%s\n", __file__);
	return (0);
}
