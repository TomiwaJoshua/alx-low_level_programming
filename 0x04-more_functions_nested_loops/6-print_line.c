#include "main.h"

/**
 * print_line - prints a straight line using the character _
 * @n: number of times the character _ is printed
 */
void print_line(int n)
{
	int a;

	if (n > 0)
	{
		for (a = 1; a <= n; a++)
		{
		_putchar('_');
		}
		_putchar('\n');
	}
	else
	{
	_putchar('\n');
	}
}
