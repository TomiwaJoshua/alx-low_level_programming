#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: the suqare matrix
 * @size: size of the matrix
 */
void print_diagsums(int *a, int size)
{
	int x, y;
	unsigned int dg1, dg2;

	dg1 = 0;
	dg2 = 0;
	y = 0;

	for (x = 0; x < size; x++)
	{
		dg1 += a[(size * x) + x];
	}
	x -= 1;

	while (x >= 0 && y < size)
	{
		dg2 += a[(size * y) + x];
		x--;
		y++;
	}
	printf("%d, %d\n", dg1, dg2);
}
