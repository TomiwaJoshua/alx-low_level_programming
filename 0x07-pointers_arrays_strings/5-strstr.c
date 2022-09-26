#include "main.h"

/**
 * _strstr - function that searches a string for a substring
 * @haystack: main string
 * @needle: substring
 * Return: Returns a pointer to the beginning of the located substring,
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int x;

	for (x = 0; haystack[x] != '\0'; x++)
	{
		if (*needle == *(haystack + x))
			return ((haystack + x));
	}
	return ('\0');
}
