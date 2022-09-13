#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: number whose sign is to be printed
 * Return: 1 for positive, 0 for zero and -1 for negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
	_putchar('+');
	return (1);
	}
	else if (n < 0)
	{
	_putchar('-');
	return (-1);
	}
	else
	{
	_putchar(0);
	}
	return (0);
}
