#include "main.h"

/**
 * _strlen - calculates length of a string
 * @s: string with length to be determined
 * Return: returns the length of the string
 */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
