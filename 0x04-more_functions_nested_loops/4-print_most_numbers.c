#include "main.h"

/**
 * print_most_numbers - prints all single digit numbers except 2 and 4
 */
void print_most_numbers(void)
{
	char x[] = "01356789";
	int r = 0;

	while (r < 8)
	{
	_putchar(x[r]);
	r++;
	}
	_putchar('\n');
}
