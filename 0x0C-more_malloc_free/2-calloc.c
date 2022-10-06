#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * of nmemb elements of size bytes each
 * @nmemb: number of elements of the array
 * @size: size of each element of the array
 * Return: returns a pointer to the memory address
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i;

	i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);
	if (p == NULL)
	{
		free(p);
		return (NULL);
	}
	while (i < (nmemb * size))
	{
		p[i] = 0;
		i++;
	}

	return (p);
}
