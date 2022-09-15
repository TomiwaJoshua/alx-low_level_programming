#include "main.h"

/**
 * more_numbers - prints all numbers from 0 to 14 ten times
 */
void more_numbers(void)
{
	char x[] = "01234567891011121314";
	int a, r;

	for (a = 0; a < 10; a++)
	{
		r = 0;

		while (r < 20)
		{
		_putchar(x[r]);
		r++;
		}
		_putchar('\n');
	}
}
