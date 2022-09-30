#include <stdio.h>
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
	int count;

	for (count = 0; count < argc; count++)
	{
		printf("%s\n", argv[count]);
	}

	return (0);
}
