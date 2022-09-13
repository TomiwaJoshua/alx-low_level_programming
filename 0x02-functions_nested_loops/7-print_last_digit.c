#include "main.h"

/**
 * print_last_digit - Prints the last digit
 * of a number.
 *
 * @n: input number as an integer.
 *
 * Return: last digit.
 */
int print_last_digit(int n)
{
	int a;

	a = n % 10;
	if (a < 0)
	{
	a = -a;
	}
	else if (a >= 0)
	{
	_putchar(a + '0');
	}
	return (a);
}
