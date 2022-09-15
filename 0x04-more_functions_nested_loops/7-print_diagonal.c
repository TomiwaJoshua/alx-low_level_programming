#include "main.h"

/**
 * print_diagonal - prints a diagonal line using \ character
 * @n: number of times the diagonal line should be printed
 */
void print_diagonal(int n)
{
	int a, b, c;

	if (n > 0)
	{
		for (a = 1; a <= n; a++)
		{
			for (b = 0; b < 1; b++)
			{
				for (c = 1; c < a; c++)
				{
				_putchar(' ');
				}
				_putchar('\\');
			}
			_putchar('\n');
		}
	}
	else
	{
	_putchar('\n');
	}
}
