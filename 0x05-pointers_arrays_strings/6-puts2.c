#include "main.h"

/**
 * puts2 - print every other character followed by a newline
 * @str: original string
 * Return: void
*/

void puts2(char *str)
{
	int n;

	if (str)
	{
		for (n = 0; str[n] != '\0'; n++)
		{
			_putchar(str[n]);
			n++;
		}
		_putchar('\n');
	}
	else
		return;
}
