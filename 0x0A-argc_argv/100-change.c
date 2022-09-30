#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: count of command line argumentss passed by the user
 * @argv: is a one dimensional array of pointers to the
 * command line arguments passed by the user
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
	int change, coins;

	coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	change = atoi(argv[1]);

	if (change < 0)
		coins = 0;
	if (change >= 25)
	{
		coins = coins + (change / 25);
		change = change % 25;
	}
	if (change >= 10)
	{
		coins = coins + (change / 10);
		change = change % 10;
	}
	if (change >= 5)
	{
		coins = coins + (change / 5);
		change = change % 5;
	}
	if (change >= 2)
	{
		coins = coins + (change / 2);
		change = change % 2;
	}
	if (change >= 1)
	{
		coins = coins + (change / 1);
	}
	printf("%d\n", coins);
	return (0);
}
