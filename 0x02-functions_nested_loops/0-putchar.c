#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char x[] = "_putchar";
	int r = 0;

	while (r < 9)
	{
	putchar(x[r]);
	r++;
	}
	putchar('\n');
	return (0);
}
