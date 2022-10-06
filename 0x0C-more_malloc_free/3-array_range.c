#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates an array o integers
 * @min: first integer of the array
 * @max: last integer of the array
 * Return: returns a pointer to the array
 */
int *array_range(int min, int max)
{
	int *p;
	unsigned int i, k;
	int j;

	i = 0;
	k = 0;
	j = min;

	if (min > max)
		return (NULL);
	while (j <= max)
	{
		i++;
		j++;
	}

	p = malloc(sizeof(int) * i);

	if (p == NULL)
	{
		return (NULL);
	}

	while (min <= max)
	{
		p[k] = min;
		min++;
		k++;
	}

	return (p);
}
