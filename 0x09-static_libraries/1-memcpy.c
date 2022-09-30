#include "main.h"

/**
 * _memcpy - function that copies memory area
 * @dest: copy destination
 * @src: memory area to be copied
 * @n: number of bytes of src to be copied into dest
 * Return: returns dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
