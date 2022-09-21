#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string to be compared
 * @s2: second string to be compared
 * Return: returns a positive integer or negative integer if the
 * strings are different or zero if they are the same
 */
int _strcmp(char *s1, char *s2)
{
	int x;

	x = 0;

	while (s1[x] != '\0' && s2[x] != '\0')
	{
		if (s1[x] != s2[x])
		{
			return (s1[x] - s2[x]);
		}

		x++;

	}

	return (0);

}
