#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line
 * @str: string to be printed
 */
void puts_half(char *str)
{
	int i, j, k;

	i = 0;

	while (str[i] != '\0')
	{
	i++;
	}

	j = i;

	if (j % 2 == 0)
	{
		k = (j / 2);

		while (k < j)
		{
			_putchar(str[k]);
			k++;
		}
	}
	else if (j % 2 != 0)
	{
		k = ((j - 1) / 2);

			while (k < (j - 1))
			{
			_putchar(str[k + 1]);
			k++;
			}
	}
	_putchar('\n');
}
