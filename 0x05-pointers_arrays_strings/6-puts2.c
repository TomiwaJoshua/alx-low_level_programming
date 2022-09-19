#include "main.h"

/**
 * puts2 - function that prints every other character of a string,
 * starting with the first character, followed by a new line
 * @str: string to be printed
 */
void puts2(char *str)
{
	int i, j, k;

	i = 0;

	_putchar(str[0]);
	while (str[i] != '\0')
	{
		i++;
	}

	j = i;

	for (k = 2; k < j; k += 2)
	{
		_putchar(str[k]);
	}
	_putchar('\n');
}
