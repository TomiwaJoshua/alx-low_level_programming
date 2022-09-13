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
	_putchar(x[r]);
	r++;
	}
	_putchar('\n');
	return (0);
}
