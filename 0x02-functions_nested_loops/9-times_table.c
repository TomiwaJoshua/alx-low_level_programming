#include "main.h"

/**
 * times_table - function that prints the 9 times table, starting with 0
 */
void times_table(void)
{
	int a, b;

	a = 48;

	while (a <= 57)
	{
		b = 48;
		while (b <= 57)
		{
			_putchar(a * b);
			_putchar(',');
			_putchar(' ');
			b++;
		}
		_putchar('\n');
		a++;
	}
}
