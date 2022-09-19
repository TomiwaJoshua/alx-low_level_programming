#include "main.h"
#include <stdio.h>

/**
 * print_array - function that prints n elements of an array of integers,
 * followed by a new line
 * @a: array whose elements are to be printed
 * @n: number of elements of the array to be printed
 */
void print_array(int *a, int n)
{
	int i;

	if (n > 0)
	{
		printf("%d", a[0]);

		for (i = 1; i < n; i++)
		{
		printf(", %d", a[i]);
		}
	}
	printf("\n");
}
