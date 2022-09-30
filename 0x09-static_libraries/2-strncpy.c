#include "main.h"

/**
 * _strncpy - function that copies a string
 * @dest: copy destination
 * @src: string to be copied
 * @n: bytes of src to be copied
 * Return: returns the string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int x;

	for (x = 0; x < n && src[x] != '\0'; x++)
	{
		dest[x] = src[x];
	}
	for ( ; x < n; x++)
	{
		dest[x] = '\0';
	}

	return (dest);
}
