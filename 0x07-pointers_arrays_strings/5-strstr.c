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
	int x, y, yes;

	x = 0;
	y = 0;
	yes = 0;

	while (haystack[x] != '\0')
	{
		if (needle[y] == '\0')
			break;
		else if (haystack[x] == needle[y])
		{
			x++;
			y++;
			yes = 1;
		}
		else
		{
			x++;
			y = 0;
			yes = 0;
		}
	}
	if (yes == 1)
		return ((haystack + x - y));
	else
		return ('\0');
}
