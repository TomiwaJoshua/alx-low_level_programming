#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char x[] = "0123456789";
	char y[] = "abcdef";
	int i = 0;
	int j = 0;

	while (i <= 9)
	{
	putchar(x[i]);
	i++;
	}
	while (j <= 5)
	{
	putchar(y[j]);
	j++;
	}
	putchar('\n');
	return (0);
}
