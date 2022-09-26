#include "main.h"

/**
 * _memset - function that fills memory with a constant byte
 * @s: buffer to fill with the constant byte
 * @b: constant byte to be written to buffer s
 * @n: number of bytes of s to fill
 * Return: returns the buffer s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
