#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a, sum;

	sum = 0;

	for (a = 1; a <= 50; a++)
	{
		sum = a + sum;
		if (sum == 1)
		{
		printf("%d", sum);
		}
		else if (sum > 1)
		{
		printf(", %d", sum);
		}
	}
	printf("\n");
	return (0);
}
