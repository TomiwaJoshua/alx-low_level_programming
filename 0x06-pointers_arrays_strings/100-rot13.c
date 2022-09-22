#include "main.h"

/**
 * rot13 - function that encodes a string into rot13
 * @str: string to be encoded
 * Return: returns the string str
 */
char *rot13(char *str)
{
	int a, b;

	char *x = "AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz";
	char *y = "NnOoPpQqRrSsTtUuVvWwXxYyZzAaBbCcDdEeFfGgHhIiJjKkLlMm";

	for (a = 0; str[a] != '\0'; a++)
	{
		for (b = 0; x[b] != '\0'; b++)
		{
			if (str[a] == x[b])
			{
				str[a] = y[b];
				break;
			}
		}
	}
	return (str);
}
