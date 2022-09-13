#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_to_98 - prints all natural numbers from n to 98,
 * followed by a new line
 * @n: number to start print from
 */
void print_to_98(int n)
{
	int a = 98;

	for (a = 98; n < a; n++)
	{
	printf("%d, ", n);
	}
	for (a = 98; n > a; n--)
	{
	printf("%d, ", n);
	}
	if (n == a)
	printf("%d", n);
	printf("\n");
}
