#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - duplicates a string
 * @str: string to be duplicated
 * Return: returns a pointer to the new string
 */
char *_strdup(char *str)
{
	char *p;
	unsigned int i;

	if (sizeof(str) < 1)
	{
		return (NULL);
	}
	else
	{
		p = malloc(sizeof(str));

		if (p == NULL)
			return (0);

		for (i = 0; i < sizeof(str); i++)
		{
			p[i] = str[i];
		}
	}
	return (p);
}
