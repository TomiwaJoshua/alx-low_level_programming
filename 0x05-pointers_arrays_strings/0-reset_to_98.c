#include "main.h"

/**
 * reset_to_98 - takes a pointer to an int as parameter and updates the value it points to to 98
 * @n int point to change to 98
 */
void reset_to_98(int *n)
{
	int *p = n;

	*p = 98;
}
