#include <stdio.h>
/**
 * main - Entry point
 * @argc: count of command line argumentss passed by the user
 * @argv: is a one dimensional array of pointers to the
 * command line arguments passed by the user
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
