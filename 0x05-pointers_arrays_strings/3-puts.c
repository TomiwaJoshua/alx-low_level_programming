#include "main.h"

/**
 * _puts - calculates length of a string
 * @str: string with length to be determined
 */
void _puts(char *str)
{
	int i, x;

	for (i = x; str[i] != '\0'; i--)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
