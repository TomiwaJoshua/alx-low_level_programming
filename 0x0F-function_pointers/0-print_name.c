#include "main.h"
#include <stdlib.h>

/**
 * print_name - prints a name
 * @name: name to print
 * @f: pointer to print function
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
