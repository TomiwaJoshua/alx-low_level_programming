#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x = 'a';
	int y = 'A';

	while (x <= 'z')
	{
	putchar(x);
	x++;
	}
	while (y <= 'Z')
	{
	putchar(y);
	y++;
	}
	printf("\n");
	return (0);
}
