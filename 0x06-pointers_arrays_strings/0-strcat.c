#include "main.h"

/**
 * _strcat - function that concatenates two strings
 * @dest: main string
 * @src: string to be appended to the dest strong
 * Return: Returns the dest string
 */
char *_strcat(char *dest, char *src)
{
	int i, j, k;

	i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	j = i;

	for (k = 0; src[k] != '\0'; k++)
	{
	dest[j + k] = src[k];
	}

	dest[j + k] = '\0';

	return (dest);
}
