#include<stdio.h>
#include<stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x = 'z';

	while (x >= 'a')
	{
	putchar(x);
	x--;
	}
	printf("\n");
	return (0);
}
