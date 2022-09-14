#include "main.h"

/**
 * print_times_table - prints the times table
 * @n : shows the number of iterations of the times table
 */
void print_times_table(int n)
{
	int a, b, m;

	if ((n >= 0) && (n <= 15))
	{
		for (a = 0; a <= n; a++)
		{
			for (b = 0; b <= n; b++)
			{
				m = a * b;
				if (b == 0)
				_putchar(m + '0');
				else if ((m < 10) && (b != 0))
				{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
				_putchar(m + '0');
				}
				else if ((m >= 10) && (m < 100) && (b != 0))
				{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar((m / 10) + '0');
				_putchar((m % 10) + '0');
				}
				else if ((m >= 100) && (b != 0))
				{
				_putchar(',');
				_putchar(' ');
				_putchar((m / 100) + '0');
				_putchar(((m % 100) / 10) + '0');
				_putchar((m % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
