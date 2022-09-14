#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int a, sum, n, p;

	n = 1;
	p = 0;

	for (a = 1; a <= 50; a++)
	{
		sum = n + p;

		if (sum == 1)
		{
		printf("%ld", sum);
		}
		else if (sum > 1)
		{
		printf(", %ld", sum);
		}
		p = n;
		n = sum;
	}
	printf("\n");
	return (0);
}
