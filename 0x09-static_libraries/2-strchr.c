#include "main.h"

/**
 * _strchr - function that locates a character in a string
 * @s: string input
 * @c: character to locate
 * Return: Returns a pointer to the first
 * occurrence of the character c in the string s
 */
char *_strchr(char *s, char c)
{
	while (*s != c)
	{
		if (!*s++)
		{
			return ('\0');
		}
	}
	return (s);
}
