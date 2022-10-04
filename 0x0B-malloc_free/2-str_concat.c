#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string input
 * @s2: second string input
 * Return: returns string output
 */
char *str_concat(char *s1, char *s2)
{
	char *p;
	unsigned int len1, len2, i, j;

	len1 = 0;
	len2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	p = malloc(sizeof(char) * (len1 + len2 + 1));
	if (p == NULL)
	{
		free(p);
		return (NULL);
	}

	for (i = 0; s1[i] != '\0'; i++)
	{
		p[i] = s1[i];
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		p[i + j] = s2[j];
	}
	p[i + j] = '\0';

	return (p);
}
