/**
* _strlen - return length of string
* @str: string to be calculated
* Return: length
*/

unsigned int _strlen(const char *str)
{
	unsigned int i = 0;

	while (str[i])
		i++;
	return (i);
}
