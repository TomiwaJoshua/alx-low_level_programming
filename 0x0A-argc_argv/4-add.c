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
	int a, b, c, sum, x;

	sum = 0;

	for (a = 1; a < argc; a++)
	{
		for (b = 0; argv[a][b] != '\0'; b++)
		{
			if (argv[a][b] < '0' || argv[a][b] > '9')
			{
				puts("Error");
				return (1);
			}
		}
	}

	for (c = 1; c < argc; c++)
	{
		x = atoi(argv[c]);
		if (x >= 0)
		{
			sum += x;
		}
	}

	printf("%d\n", sum);
	return (0);
}
