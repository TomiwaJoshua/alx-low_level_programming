#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: main string to search in
 * @accept: string with bytes to search for
 * Return: the string s
 */
char *_strpbrk(char *s, char *accept)
{
	int x, y;

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; accept[y] != '\0'; y++)
		{
			if (accept[y] == s[x])
				return ((s + x));
		}
	}
	return ('\0');
}
