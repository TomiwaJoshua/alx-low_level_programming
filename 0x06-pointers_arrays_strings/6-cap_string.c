#include "main.h"

/**
 * cap_string - function that capitalizes all words of a string
 * @str: string whose words are to be capitalized
 * Return: returns the string str
 */
char *cap_string(char *str)
{
	int i;

	i = 0;

	if (str[0] >= 'a' && str[0] <= 'z')
	{
		str[0] = str[0] - 32;
	}

		for (i = 0; str[i] != '\0'; i++)
		{
			switch (str[i])
			{
				case ' ':
				case '\t':
				case '\n':
				case ',':
				case ';':
				case '.':
				case '!':
				case '?':
				case '"':
				case '(':
				case ')':
				case '{':
				case '}':

				if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				{
					str[i + 1] -= 32;
				}
			}
		}
	return (str);
}
