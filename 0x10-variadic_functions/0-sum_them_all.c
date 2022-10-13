#include "variadic_functions.h"

/**
 * sum_them_all - sums all its parameters
 * @n: number of parameters
 * Return: returns the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list list;

	int sum;
	unsigned int i;

	sum = 0;
	i = 0;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(list, int);
	}
	va_end(list);

	return (sum);
}
