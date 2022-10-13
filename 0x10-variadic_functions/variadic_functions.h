#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);

/**
 * struct format - structure for list of types
 * of arguments passed into the function
 *
 * @c: character type
 * @i: integer type
 * @f: float type
 * @s: string type
 *
 * Description: this structure is used to list
 * types of arguments passed into a certain function
 *
 */
struct format
{
	char c;
	int i;
	float f;
	char *s;
};

void print_all(const char * const format, ...);

#endif
