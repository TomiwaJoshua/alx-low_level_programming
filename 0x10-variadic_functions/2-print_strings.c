#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: the separator between strings
 * @n: the number of strings passed into the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;

	va_list list;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(list, char *);

		if (str == NULL)
			str = "(nil)";
		printf("%s", str);
		if (i != (n - 1))
		{
			if (separator != NULL)
				printf("%s", separator);
		}
	}
	va_end(list);

	printf("\n");
}
