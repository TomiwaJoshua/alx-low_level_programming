#include "main.h"

/**
 * _puts - prints a string
 * @str: string to be printed
 */
void _puts(char *str)
{
	int i, x, a;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}

	x = i - 1;

	for (a = 0 ; a <= x; a++)
	{
		_putchar(str[a]);
	}

	_putchar('\n');
}
