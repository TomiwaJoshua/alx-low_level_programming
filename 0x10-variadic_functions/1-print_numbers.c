#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * followed by a new line
 * @separator: the seperator between the printed numbers
 * @n: number of integers passed into the funtion
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list list;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(list, int));
		if (i != (n - 1))
		{
			if (separator != NULL)
				printf("%s", separator);
		}
	}
	va_end(list);

	printf("\n");
}
