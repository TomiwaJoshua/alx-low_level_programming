#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: input buffer
 * @accept: buffer with bytes to search for in s
 * Return: returns the number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int x, y;
	unsigned int z;

	z = 0;

	for (x = 0; *(s + x) != ' '; x++)
		for (y = 0; *(accept + y) != '\0'; y++)
		{
			if (*(s + x) == *(accept + y))
				z++;
		}
	return (z);
}
