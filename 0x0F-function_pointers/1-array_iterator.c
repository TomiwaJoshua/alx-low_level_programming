#include "function_pointers.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * array_iterator - executes a function given
 * as a parameter on each element of an array
 * @array: array input
 * @size: size of the array
 * @action: pointer to the function to be used
 * Return: returns pointer to the result of the function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
		return;
	for (i = 0; i < size; i++)
		action(*(array + i));
}
