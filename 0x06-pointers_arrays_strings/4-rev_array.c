#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: array to be reversed
 * @n: size of array
 */
void reverse_array(int *a, int n)
{
	int temp, i, x;

	x = n - 1;

	for (i = 0; i < (n / 2); i++)
	{
		temp = a[i];
		a[i] = a[x - i];
		a[x - i] = temp;
	}
}
