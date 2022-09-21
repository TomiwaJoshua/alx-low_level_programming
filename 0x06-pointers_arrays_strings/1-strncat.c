#include "main.h"

/**
 * _strncat - function that concatenates two strings
 * @dest: main string
 * @src: string to be appended to the dest strong
 * @n: no of bytes of the src string to concatenate
 * Return: Returns the dest string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j, k, l;

	i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	l = 0;

	while (src[l] != '\0')
	{
		l++;
	}

	j = i;

	for (k = 0; k < n && src[k] != '\0'; k++)
	{
	dest[j + k] = src[k];
	}

	if (n < l)
	{
	dest[j + k] = '\0';
	}

	return (dest);
}
