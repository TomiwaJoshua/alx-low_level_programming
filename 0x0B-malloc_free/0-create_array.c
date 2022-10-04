#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of characters
 * and initializes it with a specific char
 * @size: is the size of the array
 * @c: the character used to initialize the array
 * Return: returns the array
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (size < 1)
	{
		return (NULL);
	}
	else
	{
		p = malloc(sizeof(char) * size);

		for (i = 0; i < size; i++)
		{
			*(p + i) = c;
		}
		*(p + i) = '\0';
	}
	return (p);
}
