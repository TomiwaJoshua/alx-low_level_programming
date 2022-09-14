#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int a, sum, n, p, lib;

	n = 1;
	p = 0;
	lib = 0;

	for (a = 1; a <= 50; a++)
	{
		sum = n + p;
		if (((sum % 2) == 0) && (sum < 4000000))
		{
		lib = lib + sum;
		}
		p = n;
		n = sum;
	}
	printf("%ld\n", lib);
	return (0);
}
