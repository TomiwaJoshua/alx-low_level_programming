#include<stdio.h>
#include<stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x = 'a';

	while (x <= 'z')
	{
	putchar(x);
	x++;
	}
	printf("\n");
	return (0);
}
