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
	unsigned int i, len;

	len = 0;

	if (str == NULL)
		return (NULL);
	while (str[len] != '\0')
		len++;

	p = malloc(sizeof(char) * (len + 1));

	if (p == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		p[i] = str[i];

	return (p);
}
