#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char x[] = "abcdfghijklmnoprstuvwxyz";
	int r = 0;

	while (r < 24)
	{
	putchar(x[r]);
	r++;
	}
	printf("\n");
	return (0);
}
