#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - conctenates two strings
 * @s1: first inptu string
 * @s2: second input string
 * @n: no of bytes of s2 which will be concatenated with s1
 * Return: returns a pointer to the new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int i, j, k, len1, len2;

	len1 = 0;
	len2 = 0;
	j = n;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;
	if (j >= len2)
		j = len2;
	p = malloc(sizeof(char) * (len1 + j + 1));
	if (p == NULL)
	{
		free(p);
		return (NULL);
	}

	for (i = 0; i < len1; i++)
	{
		*(p + i) = *(s1 + i);
	}
	for (k = 0; k < j; k++)
	{
		p[i + k] = s2[k];
	}
	p[i + k] = '\0';

	return (p);
}
